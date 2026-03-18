class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>seen={-1,-1,-1};
        int l=0,ans=0;
        for(int r=0;r<s.size();r++){
            seen[s[r]-'a']=r;
            if(seen[0]!=-1 && seen[1]!=-1 && seen[2]!=-1) ans+=(1+min(min(seen[0],seen[1]),seen[2]));
        }
        return ans;
    }
};