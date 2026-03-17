#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int ans=0,l=0;
        for(int r=0;r<s.size();r++){
            while(mpp.find(s[r])!=mpp.end() && mpp[s[r]]>=l) l=mpp[s[r]]+1;
            mpp[s[r]]=r;
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};