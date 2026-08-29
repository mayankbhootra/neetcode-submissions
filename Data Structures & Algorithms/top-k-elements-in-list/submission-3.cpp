class Solution {
public:
    static bool sortBySecond(const pair<int,int>& pair1,const pair<int,int>& pair2){
        return pair1.second > pair2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> hash_mp;
        vector<pair<int,int>> sorted_hash_mp;
        for(int i:nums)
        {
            hash_mp[i]++;
        }
        for(auto key:hash_mp)
        {
            sorted_hash_mp.push_back({key.first,key.second});
        }
        sort(sorted_hash_mp.begin(),sorted_hash_mp.end(), sortBySecond);
        for(int i=0; i<k;i++){
            res.push_back(sorted_hash_mp[i].first);
        }
        return res;
    }
};
