//
//  main.cpp
//  NameQuest
//
//  Created by Mohan Dixit on 2024-02-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string s,t;
    cin >> s >> t;
    
    int curr_ind = 0;
    int index_found = -1;
    
    for(int i = 0; i < t.size();i++){
        if(curr_ind == s.size()){
            index_found = i-1;
            break;
        }
        
        if(t[i] == s[curr_ind]){
            curr_ind++;
        }
    }
    
    reverse(s.begin(), s.end());
    
    curr_ind = 0;
    int end_index_found = -1;
    
    for(int i = t.size()-1; i > 0;i--){
        if(curr_ind == s.size()){
            end_index_found = i+1;
            break;
        }
        
        if(t[i] == s[curr_ind]){
            curr_ind++;
        }
    }
    
    if(end_index_found - index_found <= 0){
        cout << 0 << endl;
    }else{
        cout << end_index_found - index_found << endl;
    }
    
    return 0;
}
