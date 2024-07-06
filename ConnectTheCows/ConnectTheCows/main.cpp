//
//  main.cpp
//  ConnectTheCows
//
//  Created by Mohan Dixit on 2023-11-23.
//

#include <bits/stdc++.h>
using namespace std;


int check(int x1, int x2, int y1, int y2){
    if(x1==y1 & x2 > y2){
        return 1;
    }else if(x1==y1 & x2 < y2){
        return 2;
    }else if(x2==y2 & x1 > y1){
        return 3;
    }else if(x2==y2 & x1 < y1){
        return 4;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin >> n;
    
    vector<vector<int>> cows;
    
    while(n--){
        int a,b;
        cin >> a >> b;
        
        cows.push_back({a,b});
    }
        
    vector<vector<int>> og = cows;
    
    int total = cows.size();
    
    int it = 0;
    
    int sum = 0;
    
    while((cows != og) | (it == 0)){
        
        int preva = 0;
        int prevb = 0;
        int tsum = 1;
        int d = 0;
        
        for(vector<int> val : cows){
            
            if(check(val[0],val[1],preva,prevb) == 0){
                tsum = 0;
                break;
            }else if(val == cows[cows.size()-1]){
                if((check(val[0],val[1],0,0)==0) | (check(val[0],val[1],0,0) == d)){
                    tsum = 0;
                    break;
                }
            }else{
                if(check(val[0],val[1],preva,prevb) == d){
                    tsum = 0;
                    break;
                }
            }
            
            d = check(val[0],val[1],preva,prevb);

            preva = val[0];
            prevb = val[1];
                
        }
        sum += tsum;
        it++;
        next_permutation(cows.begin(), cows.end());
    }
    
    cout << sum << endl;
    
    return 0;
}
