#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size()/3;
    map<int, int> mp;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    vector<int> ans;
    
    for(auto i:mp){
        if(i.second > n){ 
            ans.push_back(i.first);
        }
    }
    return ans;
}