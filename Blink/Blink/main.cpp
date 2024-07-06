//
//  main.cpp
//  Blink
//
//  Created by Mohan Dixit on 2023-11-26.
//

#include <bits/stdc++.h>
using namespace std;

ofstream fout("blink.out");
ifstream fin("blink.in");

vector<int> moves(vector<int> vals){
    
    int N = vals.size();
    vector<int> old_v = vals;
    
    for(int j = 1; j < N; j++){
        if(old_v[j-1] == 1){
            if(old_v[j] == 1){
                vals[j] = 0;
            }else{
                vals[j] = 1;
            }
        }
    }
    if(old_v[N-1] == 1){
        if(old_v[0] == 0){
            vals[0] = 1;
        }else{
            vals[0] = 0;
        }
    }

    return vals;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long int B;
    int N;
    
    fin >> N >> B;
    
    vector<int> vals;
    
    for(int i = 0; i < N;i++){
        int temp; fin >> temp; vals.push_back(temp);
    }
    
    map<vector<int>,int> occ;
    
    int repeat;
    vector<int> vals_t = vals;
    
    for(int i = 0; i < pow(2,18)+1;i++){
        
        vals = moves(vals);
        
        if(occ.count(vals)){
            repeat = i-occ[vals];
            break;
        }
        occ[vals] = i;
    }
    
    B = B%repeat;
    
    for(int i = 0; i < B; i++){
        vals_t = moves(vals_t);
    }
    
    for(int n : vals_t){
        fout << n << endl;
    }
    
    return 0;
}
