class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res=0;
        for(int i:nums){
            if(mp[i]) continue;
            mp[i] = mp[i-1] + mp[i+1] + 1;
            mp[i + mp[i+1]] = mp[i];
            mp[i - mp[i-1]] = mp[i];
            res = max(res,mp[i]);
        }
        // for(auto el:mp) cout<<el.first<<" "<<el.second<<endl;
        return res;
    }
};
