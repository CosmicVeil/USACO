//
//  main.cpp
//  SwitchingOnTheLights
//
//  Created by Mohan Dixit on 2024-03-12.
//

#include <bits/stdc++.h>
using namespace std;

ofstream fout("lightson.out");
ifstream fin("lightson.in");


int N,M;

vector<vector<bool>> visited;
vector<vector<bool>> grid;
map<pair<int,int>, vector<pair<int,int>>> edges;
vector<vector<int>> poss = {{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int x, int y){
    if(x > N || y > N || y < 1 || x < 1 || !visited[x][y]){
        return false;
    }
    return true;
}

void dfs(int x,int y){
    if(x > N || y > N || y < 1 || x < 1 || !grid[x][y] || visited[x][y]){
        return;
    }
    visited[x][y] = true;
    pair<int,int> temp = make_pair(x,y);
    
    if(edges.count(temp)){
        for(pair<int,int> paired : edges[temp]){
            grid[paired.first][paired.second] = true;
            for(int i = 0; i < 4;i++){
                if(valid(paired.first+poss[i][0], paired.second+poss[i][1])){
                    dfs(paired.first,paired.second);
                    break;
                }
            }
        }
    }
    
    for(int i = 0; i < 4;i++){
        dfs(x+poss[i][0],y+poss[i][1]);
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cin >> N >> M;
    grid.resize(N+1);
    visited.resize(N+1);
    
    for(int i = 0; i < N+1;i++){
        for(int j = 0; j < N+1;j++){
            grid[i].push_back(false);
            visited[i].push_back(false);
        }
    }
        
    grid[1][1] = true;
    
    
    for(int i = 0; i < M;i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        pair<int,int> temp = make_pair(a, b);
        pair<int,int> temp1 = make_pair(c, d);
        if(edges.count(temp)){
            edges[temp].push_back(temp1);
        }else{
            vector<pair<int,int>> temp2 = {temp1};
            edges[temp] = temp2;
        }
    }
    
    dfs(1,1);
    int ans = 0;
    
    for(int i = 1; i < N+1; i ++){
        for(int j = 1; j < N+1;j++){
            if(grid[i][j]) ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
