#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int missing = 0;
    int repeat = 0;
    sort(arr.begin(),arr.end());
    if(n == 2 && arr[0] == arr[1]) {missing = 2; repeat = 1; }
	for(int i=0; i<n; i++){
        if(arr[0] == 2) missing = 1;
        
        if(arr[i] + 2 == arr[i+1]){
            missing = arr[i] + 1; 
        }
        if(arr[i] == arr[i+1]) repeat = arr[i];
        if(repeat == 0 && missing == 0 && (arr[n-2] == arr[n-1])) missing = arr[n-1]+1;
        if(missing == 0 && repeat != 0 && arr[n-1]!=arr[n-2]) missing = arr[n-1]+1;
    }
    return {missing, repeat};
}
