//
//  main.cpp
//  Gifts
//
//  Created by Mohan Dixit on 2023-11-26.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int B,N;
    cin >> N >> B;
    
    vector<vector<int>> vals;
    vector<int> sums;
    map<int,int> price;
    
    while(N--){

        int t,t2;
        cin >> t >> t2;
        vals.push_back({t,t2});
        sums.push_back(t+t2);
        price[t+t2] = t;
    }
    
    sort(sums.begin(),sums.end());
    
    vector<int> priceList;
    
    int sum = 0;
    int ind = 0;
    
    while(sum <= B){
        sum+= sums[ind];
        priceList.push_back(price[sums[ind]]);
        ind++;
    }
    
    sort(priceList.begin(),priceList.end(), greater<>());
    
    if(sum - priceList[0] <= B){
        cout << ind << endl;
    }else{
        cout << ind - 1 << endl;
    }
    
    return 0;
}
