//
//  main.cpp
//  CoveredPath
//
//  Created by Mohan Dixit on 2024-02-04.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int v1,v2;
    
    cin >> v1 >> v2;
    
    int t,d;
    cin >> t >> d;
    
    int ans = v1+v2;
    
    for(int i = 1; i < t-1;i++){
        ans += min(v1+i*d, v2+(t-i-1)*d);
    }
    
    cout << ans << endl;
    return 0;
}
