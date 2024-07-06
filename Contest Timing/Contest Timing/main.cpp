//
//  main.cpp
//  Contest Timing
//
//  Created by Mohan Dixit on 2024-01-29.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int D,H,M;
    cin >> D >> H >> M;
    
    int start = 11*60*24 + 11*60+11;
    int end = D*60*24 + H*60+M;
    
    if(start > end){
        cout << -1 << endl;
    }
    else{
        cout << end-start << endl;
    }
    return 0;
}
