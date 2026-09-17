class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res=0;
        for(int i:nums){
            if(mp.count(i)) continue;
            else mp[i] = 1;
            if(mp.count(i-1))
                mp[i]+=mp[i-1];
            if(mp.count(i+1))
                mp[i]+=mp[i+1];
            
            int j=1;
            while(mp.count(i-j)){
                mp[i-j] = mp[i];;
                j++;
            }
            j=1;
            while(mp.count(i+j)){
                mp[i+j] = mp[i];
                j++;
            }
            res = max(res,mp[i]);
        }
        // for(auto el:mp) cout<<el.first<<" "<<el.second<<endl;
        return res;
    }
};
