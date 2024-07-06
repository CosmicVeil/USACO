//
//  main.cpp
//  Moo
//
//  Created by Mohan Dixit on 2023-11-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    int m_pos = 1;
    
    int ind = 1;
    
    while(m_pos < N){
        
        for(int i = 3; i < 3+ind;i++){
            m_pos += i;
            if(m_pos == N){
                break;
            }
        }

    }
    
    if(m_pos == N){
        cout << "m" << endl;
    }else{
        cout << "o" << endl;
    }
    
    return 0;
}
