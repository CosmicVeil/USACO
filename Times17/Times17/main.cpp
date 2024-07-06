//
//  main.cpp
//  Times17
//
//  Created by Mohan Dixit on 2023-11-17.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string a;
    cin >> a;
    
    string b = "0000" + a;
    a += "0000";
    
    int ans[1010] = {0};
    
    for(int i = a.length()-1;i > 0; i--){
        
        ans[i] += a[i]- '0' + b[i] - '0';
                
        if(ans[i] >= 2){
            ans[i]-=2;
            ans[i-1]+=1;
        }
        
    }

    int i = 0;
    
    if(ans[0] == 0){
        i++;
        cout << "1";
    }
   
    while(i < a.length()){
        cout << ans[i++];
    }
    
    return 0;
}
