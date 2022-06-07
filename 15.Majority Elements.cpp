#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int x = n/2;
    map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    int res = -1;
    for(int i=0; i<n; i++){
        if(m[arr[i]] > x){
            res = arr[i];
        }
    }
    return res;
}