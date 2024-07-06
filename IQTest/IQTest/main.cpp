//
//  main.cpp
//  IQTest
//
//  Created by Mohan Dixit on 2024-02-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    vector<int> diff;
    
    
    vector<int> odds;
    vector<int> evens;
    
    for(int i = 0; i < N;i++){
        int a;
        cin >> a;
        
        if(a%2 == 0){
            evens.push_back(i+1);
        }else{
            odds.push_back(i+1);
        }
        
        diff.push_back(a%2);
    }
    
    if(evens.size() == 1){
        cout << evens[0] << endl;
    }else{
        cout << odds[0] << endl;
    }
    
    return 0;
}
