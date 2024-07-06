//
//  main.cpp
//  YearOfTheCow
//
//  Created by Mohan Dixit on 2024-01-21.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, const char * argv[]) {
    int N,K;
    cin >> N >> K;
    vector<int> times;
    vector<int> gaps;
    
    for(int i = 0; i < N;i++){
        int temp;
        cin >> temp;
        if(count(times.begin(),times.end(),(temp+1)/12+1) == 0){
            times.push_back((temp+11)/12);
        }
    }
    
    sort(times.begin(),times.end());
    
    gaps.push_back(times[0]-1);
    
    for(int i = 1; i < times.size();i++){
        gaps.push_back(times[i]-times[i-1]-1);
    }
    
    sort(gaps.begin(),gaps.end(),greater<>());
    
    int answer = times[times.size()-1];
    
    for(int i = 0; i < K-1 && i < gaps.size();i++){
        answer-=gaps[i];
    }
    
    cout << answer*12 << endl;
    return 0;
}
