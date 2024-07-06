//
//  main.cpp
//  UsOpenBronze#1
//
//  Created by Mohan Dixit on 2023-10-29.
//

#include <bits/stdc++.h>
using namespace std;

//
//int calcScore(string s){
//
//    int score = 0;
//    for(int i = 1; i < s.length();i++){
//        if( s[i] == s[i-1]){
//            score++;
//        }
//    }
//    return score;
//}
//
//
//set<int> recurse(int ind, string s, set<int> ans){
//
//    if(ind == s.size()){
//        ans.insert(calcScore(s));
//    }
//
//    for(int i = ind; i < s.size();i++){
//        if(s[i]=='F'){
//
//            string news = s;
//
//            news.erase(i,1);
//            news.insert(i, "B");
//            ans = recurse(i+1,news,ans);
//
//            news.erase(i,1);
//            news.insert(i,"E");
//            ans = recurse(i+1,news,ans);
//
//            break;
//        }else if(i == s.size()-1){
//            ans = recurse(i+1,s,ans);
//        }
//    }
//
//    return ans;
//
//}

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int count_f = 0;
    
    for(char& c:s ){
        if(c == 'F'){
            count_f ++;
        }
    }
    
    if(count_f % 2 == 0){
        for(int i = 1; i <= count_f+1;i+=2){
            cout << i << endl;
        }
    }else{
        for(int i = 1; i <= count_f;i++){
            cout << i << endl;
        }
    }
    
//    set<int> ans;
//
//    set<int> answers = recurse(0,s,ans);
//
//    cout << answers.size() << endl;
//
//    vector<int> temp;
//    for(auto f : answers){
//        temp.push_back(f);
//    }
//
//    sort(temp.begin(),temp.end());
//    for(auto val : temp){
//        cout << val << endl;
//    }
//
    return 0;
}
