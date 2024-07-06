//
//  main.cpp
//  DecreaseTheSumOfTheDigits
//
//  Created by Mohan Dixit on 2024-02-05.
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll round(ll val, ll digits){
    ll divideBy = pow(10, digits);
    
    double reminder = val%divideBy;
    
    ll ans = val+((reminder)*pow(10,digits));
    
    return ans;
    
    
}


int num_sum(ll num){
    string s = to_string(num);
    
    int sum = 0;
    
    for(int i = 0; i < s.size();i++){
        sum += (s[i]- '0');
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    while(N--){
        ll n,s;
        cin >> n >> s;
        
        ll ans_sum = num_sum(n);
        
        ll ans = n;
        
        int i = 1;
        
        while(s < ans_sum){
            
            ans = round(n,i);
            ans_sum = num_sum(ans);
            
            
            if(ans_sum <= s){
                break;
            }

            i++;
        }
        
        cout << ans - n << endl;
        
    }
    return 0;
}
