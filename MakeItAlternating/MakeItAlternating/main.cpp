//
//  main.cpp
//  MakeItAlternating
//
//  Created by Mohan Dixit on 2024-02-02.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(ll n){
    
    ll val = 1;
    
    for(int i = 1; i <= n;i++){
        val = (val*i)%998244353;
    }
    return val;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int N; cin >> N;
    
    while(N--){
        string s;
        cin >> s;
        
        ll num_blocks = 0;
        ll productBlocks = 1;
        ll block_length = 1;
        
        for(int i = 1; i <= s.size();i++){
            if(s[i] != s[i-1]){
                num_blocks++;
                productBlocks *= (block_length % 998244353);
                productBlocks = productBlocks % 998244353;
                block_length = 0;
            }
            block_length++;
        }
        
        productBlocks *= fact(s.size()-num_blocks);
        productBlocks = productBlocks%998244353;
        
        cout << s.size() - num_blocks << " " << productBlocks << endl;

    }
    return 0;
}
