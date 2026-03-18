class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>cnt;
        int l=0,ans=0;
        for(int r=0;r<fruits.size();r++){
            cnt[fruits[r]]++;
            while(cnt.size()>2){
                int x=fruits[l++];
                if(--cnt[x]==0) cnt.erase(x);
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};