//
//  main.cpp
//  Odometer
//
//  Created by Mohan Dixit on 2023-11-30.
//

#include <bits/stdc++.h>
using namespace std;

ofstream fout("odometer.out");
ifstream fin("odometer.in");


int main(int argc, const char * argv[]) {
    // insert code here...
    long long int a;
    long long int b;
    
    fin >> a >> b;
    
    int ans = 0;
    
    for(long long i = a; i <= b; i++){
        char first = 'a';
        int numf = 0;
        int nums = 0;
        char second = 'a';
        
        string vals = to_string(i);
        
        bool val = true;
        
        for(char c : vals){
            if(first == 'a'){
                first = c;
                numf++;
            }else if(c == first){
                numf++;
            }else if(second == 'a'){
                nums++;
                second = c;
            }else if(c == second){
                nums++;
            }else{
                val = false;
            }
        }
        
        if(val & (numf == 1 | nums == 1)){
            ans++;
        }
    }
    
    fout << ans << endl;
    return 0;
}
