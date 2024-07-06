//
//  main.cpp
//  ComfortableCows
//
//  Created by Mohan Dixit on 2024-01-20.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    // insert code here...
    ll N; cin >> N;
    
    vector<pair<int, int>> queue;
    map<pair<int,int>, int> vals;
    
    queue.resize(N);
    
    for(int i = 0; i < N;i++){
        int x,y;
        cin >> x >> y;
        
        queue[i].first = x;
        queue[i].second = y;
    }
    
    while(queue.size() != 0){
        
    }
    return 0;
}
