//
//  main.cpp
//  StuckInARut
//
//  Created by Mohan Dixit on 2023-12-21.
//

#include <bits/stdc++.h>
using namespace std;


vector<int> find_meet(vector<int> east, vector<int> north){
    
    int east_diff = east[0] - north[0];
    int north_diff = north[1] - east[1];
    
    if(east_diff > 0 && north_diff > 0){
        vector<int> vals = {1000000000+1,1000000000+1};
        return vals;
    }
    
    if(north_diff > east_diff){
        vector<int> vals = {-east_diff, 1000000000+1};
        return vals;
    }else if(north_diff < east_diff){
        vector<int> vals = {1000000000+1, -north_diff};
        return vals;
    }else{
        vector<int> vals = {1000000000+1,1000000000+1};
        return vals;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    vector<vector<int>> east;
    vector<vector<int>> north;
    vector<vector<int>> order;
    for(int i = 0; i < N; i++){
        char d;
        int x;
        int y;
        
        cin >> d >> x >> y;
        
        vector<int> temp = {x,y};
        order.push_back(temp);
        
        if(d == 'E'){
            east.push_back(temp);
        }else{
            north.push_back(temp);
        }
    }
    
    map<vector<int>,int> mins;
    
    for(int i = 0; i < east.size();i++){
        for(int j = 0; j < north.size();j++){
            
            vector<int> temp = find_meet(east[i], north[j]);
            
            if(mins.find(east[i]) == mins.end()){
                mins[east[i]] = 1000000000+1;
            }
            
            if(mins.find(north[j]) == mins.end()){
                mins[north[j]] = 1000000000+1;
            }
            
            mins[east[i]] = min(mins[east[i]], temp[0]);
            mins[north[j]] = min(mins[north[j]], temp[1]);
        }
    }
    
    for(int i = 0; i < order.size();i++){
        int val = mins[order[i]];
        if(val == (1000000001)){
            cout << "Infinity" << endl;
        }else{
            cout << val << endl;
        }
    }
    
    return 0;
}
