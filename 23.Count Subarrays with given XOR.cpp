#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int, int> mp;
    int eksor = 0, count = 0;
    for(int i=0; i<arr.size(); i++){
        eksor ^= arr[i];
        if(eksor == x) count++;
        if(mp.find(eksor^x) != mp.end()) count += mp[eksor^x];
        mp[eksor]++;
    }
    return count;
}