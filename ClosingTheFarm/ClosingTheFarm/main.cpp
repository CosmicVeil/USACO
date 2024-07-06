//
//  main.cpp
//  ClosingTheFarm
//
//  Created by Mohan Dixit on 2024-02-08.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
//
//ofstream cout("closing.out");
//ifstream cin("closing.in");


int main(int argc, const char * argv[]) {
    // insert code here...
    int N,M;
    cin >> N >> M;
    
    vector<vector<int>> connections;
    connections.resize(3001);
    
    for(int i = 0; i < M;i++){
        int a,b;
        cin >> a >> b;
        
        connections[a].push_back(b);
        connections[b].push_back(a);
    }
    
    map<int,int> needed;
    vector<int> not_connected;
    
    bool works = true;
    
    for(int i = 0; i < 3002;i++){
        if(connections[i].size() == 1){
            
            if(find(needed.begin(),needed.end(),connections[i][0]) == needed.end()){
                needed[connections[i][0]] = i;
            }
            not_connected.push_back(i);
        }
    }
    
    vector<int> barns;
    
    for(int j =0; j < N-1;j++){
        int val;
        cin >> val;
        
        barns.push_back(val);
        
        if(connections[val].size() == 0){
            works = false;
        }
    }
    
    if(!works){
        cout << "NO" << endl;
        for(int j = 0; j < N-2;j++){
            
            if(find(not_connected.begin(),not_connected.end(),barns[j]) != not_connected.end()){
                not_connected.erase(remove(not_connected.begin(),not_connected.end(), barns[j]), not_connected.end());
            }
            
            if(not_connected.size() == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            
            not_connected.push_back(barns[j]);
        }
    }else{
        
        cout << "YES" << endl;
        
        
        for(int j = 0; j < N-1;j++){
            
            
            
            if(needed.find(barns[j]) != needed.end()){ // Make needed show the element it needs(turn into a map)
                
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
                                                                    
        }
    }
    return 0;
}
