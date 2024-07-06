//
//  main.cpp
//  Rope Folding
//
//  Created by Mohan Dixit on 2023-11-24.
//

#include <bits/stdc++.h>
using namespace std;

int check(int start, int end, vector<int> diffs){
    for(int i = 0; start+i <= end-i;i++){
        if(diffs[start+i] != diffs[end-i]){
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int m,n;
    cin >> n >> m;
    
    vector<int> vals;
    vector<int> diffs;
    
    for(int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        vals.push_back(temp);
    }
    
    sort(vals.begin(),vals.end());
    
    for(int i= 1; i < n;i++){
        diffs.push_back(vals[i]-vals[i-1]);
    }
    
    int ans = 0;
    
    for(int i = 1; i < n-1; i++){
        ans += check(i,n-2,diffs);
    }
    
    for(int i = 0; i < n-1; i++){\
        ans += check(0,i,diffs);
    }
    
    cout << ans << endl;

    return 0;
}
