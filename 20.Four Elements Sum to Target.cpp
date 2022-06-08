#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int l = j+1;
            int r = n-1;
            while(l<r){
                int val = arr[l]+arr[r];
                if(arr[i]+arr[j]+val == target) return "Yes";
                else if(arr[i]+arr[j]+val < target) l += 1;
                else r -= 1;
            }
        }
    }
    return "No";
}
