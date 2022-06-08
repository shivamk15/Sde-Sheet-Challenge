#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> freqChar(26, 0);
    int mxlength = 1;
    int i = 0;
    int j = 0;
    int n = input.size();
    while(j < n){
        if(freqChar[input[j] - 'a'] == 0){
            freqChar[input[j] - 'a'] = 1;
        }
        else{
            mxlength = max(mxlength, j-i);
            while(i <= j && freqChar[input[j] - 'a'] > 0){
                freqChar[input[i] - 'a'] = 0;
                i++;
            }
            freqChar[input[j] - 'a'] = 1;
        }
        j++;
    }
    mxlength = max(mxlength, j-i);
    return mxlength;
}