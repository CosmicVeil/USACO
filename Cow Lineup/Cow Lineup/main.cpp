//
//  main.cpp
//  Cow Lineup
//
//  Created by Mohan Dixit on 2024-01-29.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    map<int,int> types;
    set<int> possible_types;
    set<int> current_types;
    
    vector<int> locations;
    
    for(int i = 0; i < N;i++){
        int x,y;
        cin >> x >> y;
        
        types[x] = y;
        
        locations.push_back(x);
        possible_types.insert(y);
    }
    
    int ans = INT_MAX;
    vector<int> count;
    
    
    int i =0;
    
    
    sort(locations.begin(),locations.end());
    int current_val;
    int prev_ind;
    int first_index = 0;
    
    while(true){
        
        current_val = locations[i];
        
        if(current_types == possible_types){
            
            int sum = accumulate(count.begin(), count.end(), 0);
            ans = min(ans,sum);
            current_types.erase(types[locations[first_index]]);
            count.erase(count.begin());
            first_index++;
        }
        if(types[locations[first_index]] == types[current_val] && i != 0){
            first_index++;
            count.erase(count.begin());
        }else{
            if(i==0){
                count.push_back(locations[i]);
                current_types.insert(types[locations[i]]);
            }else{
                count.push_back(locations[i]-prev_ind);
                current_types.insert(types[locations[i]]);
            }
        }
    
        
        if(current_val == locations[locations.size()-1]){
            if(current_types == possible_types){
                
                int sum = accumulate(count.begin(), count.end(), 0);
                ans = min(ans,sum);
                current_types.erase(types[locations[first_index]]);
                count.erase(count.begin());
                first_index++;
            }
            break;
        }

        prev_ind = current_val;
        
        i++;
    }
    
    cout << ans << endl;
    
    
    
    return 0;
}
