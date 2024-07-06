//
//  main.cpp
//  MilkVisits
//
//  Created by Mohan Dixit on 2024-03-14.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N,M;
    cin >> N >> M;
    
    string farms;
    cin >> farms;
    
    vector<vector<int>> edges;
    edges.resize(N+1);
    
    for(int i = 0; i<N-1;i++){
        int x,y;
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    
    for(int i = 0; i < M;i++){
        int A,B;
        char C;
        cin >> A >> B >> C;
        
        
    }
    return 0;
}
