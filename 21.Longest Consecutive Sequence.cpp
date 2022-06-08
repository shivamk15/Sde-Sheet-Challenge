#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int cnt = 0;
    int max = 0;
    if(n == 1) return 1;
    if(n == 2 && arr[0] == arr[1]) return 1;
    for(int i=0; i<n; i++){
        if(arr[i]+1 == arr[i+1]){
            cnt++;
            if(cnt > max) max = cnt;
        }
        else if(arr[i+1] == arr[i]){
            continue;
        }
        else cnt = 0;
    }
    return max+1;
}