//
//  main.cpp
//  Cereal
//
//  Created by Mohan Dixit on 2024-01-07.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(int argc, const char * argv[]) {
    // insert code here...
    
    ifstream fin("cereal.in");
    ofstream fout("cereal.out");
    
    vector<int> vals;
    vector<int> first;
    vector<int> second;

    ll N,M;
    
    fin >> N >> M;
    
    vals.resize(M+1);
    fill(vals.begin(), vals.end(), 0);
    first.resize(N+1);
    second.resize(N+1);
    
    for(int i = 0; i < N;i++){
        fin >> first[i+1] >> second[i+1];
    }
    
    int cnt = 0;
    vector<int> ans;
    ans.resize(10e5);
    
    for(int i = N; i > 0; i--){
        
        int j = i;
        int pos = first[i];
        
        while(true){
            if(vals[pos] == 0){
                vals[pos] = j;
                cnt++;
                break;
            }else if(vals[pos] < j){
                break;
            }else{
                int k = vals[pos];
                vals[pos] = j;
                if(pos == second[k]){
                    break;
                }
                j=k;
                pos = second[k];
            }
        }
        
        ans[i] = cnt;
    }
    
    //reverse(ans.begin(),ans.end());
    
    for(int i = 1; i <= N;i++){
        fout << ans[i] << endl;
    }
    
    return 0;
}
