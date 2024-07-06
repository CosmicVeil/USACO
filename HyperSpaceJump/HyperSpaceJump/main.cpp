//
//  main.cpp
//  HyperSpaceJump
//
//  Created by Mohan Dixit on 2024-02-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N; cin >> N;
    
    vector<double> vals;
    map<double,int> occurences;
    
    for(int i = 0; i < N;i++){
        string s;
        cin >> s;
        
        string first_int;
        string second_int;
        string last_int;
        
        char type = '1';
        
        for(int i =1; i < s.size();i++){
            
            if(s[i] == ')'){
                continue;
            }
            if(s[i] == '+'){
                type = '2';
                continue;
            }else if(s[i] == '/'){
                type = '3';
                continue;
            }
            
            if(type == '1'){
                first_int += s[i];
            }else if(type == '2'){
                second_int += s[i];
            }else{
                last_int += s[i];
            }
        }
        
        double first, second, last;
        first = stod(first_int);
        second = stod(second_int);
        last = stod(last_int);
        
        double ans = (first+second)/last;
        
        vals.push_back(ans);
        if(occurences.find(ans) == occurences.end()){
            occurences[ans]  =1;
        }else{
            occurences[ans]++;
        }
        
        
    }
    
    for(int i = 0; i < N;i++){
        cout << occurences[vals[i]] << " ";
    }
    return 0;
}
