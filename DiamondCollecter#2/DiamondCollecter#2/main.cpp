//
//  main.cpp
//  DiamondCollecter#2
//
//  Created by Mohan Dixit on 2024-02-08.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,k;
    cin >> n >> k;
    vector<int> vals;
    vals.resize(n);
    
    vector<int> diff;
    
    for(int i = 0; i < n;i++){
        cin >> vals[i];

    }
    
    sort(vals.begin(),vals.end());
    
    int max1 = 0;
    int max2 = 0;
    
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
            
            int diff = vals[j] - vals[i];
            
            int val = j-i+1;
            
            if(diff <= k){
                if(val > max1){
                    max1 = val;
                    max2 = max1;
                }else if(val > max2){
                    max2 = val;
                }
            }
        }
    }
    
    cout << max1 + max2 << endl;
    
    
    
    return 0;
}
