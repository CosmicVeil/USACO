//
//  main.cpp
//  DoYouKnowYourABC's
//
//  Created by Mohan Dixit on 2023-12-16.
//

#include <bits/stdc++.h>
using namespace std;

ofstream fout("DoYouKnowYourABCs.out");
ifstream fin("DoYouKnowYourABCs.in");

int main(int argc, const char * argv[]) {

    
    vector<int> vals;
    
    for(int i = 0; i < 7; i++){
        int val;
        cin >> val;
        vals.push_back(val);
    }
    
    sort(vals.begin(),vals.end());
    
    int A = vals[0];
    int B = vals[1];
    int total = vals[6];
    
    cout << A << ' ' << B << ' ' << total-A-B << endl;
    return 0;
}
