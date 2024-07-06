//
//  main.cpp
//  QueueSort
//
//  Created by Mohan Dixit on 2024-02-06.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    
    while(N--){
        int a;
        cin >> a;
        
        vector<int> vals;
        vals.resize(a);
        
        int min_index = 0;
        int mini = 10e5+1;

        
        for(int i = 0; i < a;i++){
            cin >> vals[i];
            
            if(vals[i] < mini){
                mini = vals[i];
                min_index = i;
            }
            
        }
        
        bool works = true;
        
        for(int j = min_index+1;j < a;j++){
            if(vals[j] < vals[j-1]){
                works = false;
                break;
            }
        }
        
        if(works){
            cout << min_index << endl;
        }else{
            cout << -1 << endl;
        }
                
        
        
    }
    return 0;
}
