//
//  main.cpp
//  CowsInARow
//
//  Created by Mohan Dixit on 2023-10-31.
//

#include <bits/stdc++.h>
using namespace std;

int block(vector<int> n){
    int ans = 0;
    
    int key = 1;
    
    for(int i = 1; i < n.size();i++){
        if(n[i]==n[i-1]){
            key++;
        }else{
            ans = max(ans,key);
            key = 1;
        }
    }
    
    return ans;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N;
    cin >> N;
    
    vector<int> cows;
    
    while(N--){
        int temp;
        cin >> temp;
        cows.push_back(temp);
    }
    
    int ans = 0;
    
    for(int& num : cows){
        vector<int> copy = cows;
        copy.erase(remove(copy.begin(),copy.end(), num),copy.end());
        
        ans = max(ans, block(copy));
    }
    
    cout << ans << endl;
    
    return 0;
}
