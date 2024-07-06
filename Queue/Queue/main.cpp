//
//  main.cpp
//  Queue
//
//  Created by Mohan Dixit on 2024-02-04.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    
    cin >> N;
    
    vector<int> walruses;
    walruses.resize(N);
    
    for(int i = 0; i < N;i++){
        cin >> walruses[i];
    }
    
    
    for(int i = 0; i < N;i++){
        
        int curr = walruses[i];
        bool smaller = false;
        
        for(int j = N-1; j > i;j--){
            if(walruses[j] < curr){
                smaller = true;
                cout << j-i-1 << " ";
                break;
            }
        }
        
        if(!smaller){
            cout << "-1 ";
        }
    }
    return 0;
}
