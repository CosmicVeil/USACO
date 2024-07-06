//
//  main.cpp
//  Triangle
//
//  Created by Mohan Dixit on 2024-02-03.
//

#include <bits/stdc++.h>
using namespace std;

bool solve(int x1, int x2,int y1,int y2,int z1,int z2){
    
    int a = abs(y1-x1)*abs(y1-x1) + abs(y2-x2)*abs(y2-x2);
    int b = abs(z1-x1)*abs(z1-x1) + abs(z2-x2)*abs(z2-x2);
    int c = abs(y1-z1)*abs(y1-z1) + abs(y2-z2)*abs(y2-z2);
    
    if(min(c,min(a,b)) == 0){
        return false;
    }
    
    if(a == b+c || b == a+c || c == a+b){
        return true;
    }
    else{
        return false;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x1,x2,y1,y2, z1, z2;
    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
    
    if(solve(x1,x2,y1,y2, z1, z2)){
        cout << "RIGHT" << endl;
    }else if(solve(x1-1,x2,y1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2-1,y1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1+1,x2,y1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2+1,y1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1-1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1+1,y2, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2-1, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2+1, z1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2, z1-1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2, z1+1, z2)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2, z1, z2-1)){
        cout << "ALMOST" << endl;
    }else if(solve(x1,x2,y1,y2, z1, z2+1)){
        cout << "ALMOST" << endl;
    }else{
        cout << "NEITHER" << endl;
    }
    
    
    
    return 0;
}
