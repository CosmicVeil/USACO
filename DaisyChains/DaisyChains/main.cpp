//
//  main.cpp
//  DaisyChains
//
//  Created by Mohan Dixit on 2023-12-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    vector<int> vals;
    
    for(int i = 0; i < N;i++){
        int temp;
        cin >> temp;
        vals.push_back(temp);
    }
    
    
    int ans = 0;
    
    for(int i = 0; i < N;i++){
        for(int j = N-1; j >= i;j--){
            double sum = 0;
            for(int k = i; k < j+1; k++){
                sum+= vals[k];
            }
            sum/=(j-i+1);
            for(int k = i; k < j+1; k++){
                if(sum == vals[k]){
                    ans++;
                    break;
                }
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
