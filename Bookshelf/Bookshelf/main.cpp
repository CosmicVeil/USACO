//
//  main.cpp
//  Bookshelf
//
//  Created by Mohan Dixit on 2023-11-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N,L;
    
    cin >> N >> L;
    vector<int> height;
    map<int,int> wh;
    
    while(N--){
        int temp1,temp2;
        
        cin >> temp1 >> temp2;
        
        height.push_back(temp1);
        
        wh[temp1] = temp2;
    }
    
    sort(height.begin(),height.end(),greater<>());
    
    int count = 0;
    int ans = 0;
    int prev_i = 0;
    
    for(int j : height){
        
        int i = wh[j];
        if(count == prev_i){
            ans += j;
        }
        
        if(count+i <= L){
            
            count += i;
        }else{
            count = i;
            prev_i = i;
        }
        
    }
    
    cout << ans << endl;
    
    
    
    return 0;
}
