//
//  main.cpp
//  DiamondCollector
//
//  Created by Mohan Dixit on 2024-02-08.
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> vals;
int n,k;


ll distance(int point){
    
    ll ans = 0;
    
    for(int i = 0; i < vals.size();i++){
        int curr = vals[i];
        curr = abs(point-curr)-k;
        
        if(curr <= 0){
            ans++;
        }
    }
    
    return ans;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cin >> n>> k;
    
    vals.resize(n);
    
    for(int i =0; i < n;i++){
        cin >> vals[i];
    }
    
    int right = 1000000000;
    int left = 0;
    
    while(left <= right){
        
        int mid = (left+right)/2;
        ll right_score = distance(right);
        ll left_score = distance(left);
        ll mid_score = distance(mid);
        
        if(mid_score >= left_score && mid_score >= right_score){
            cout << mid_score << endl;
            break;
        }else if(mid_score <= left_score){
            right = mid-1;
        }else{
            left = mid+1;
        }
        
    }
    
    
    
    return 0;
}
