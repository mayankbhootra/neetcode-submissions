class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int allpro = 1;
        int countzero = 0;
        vector<int> zero(nums.size(),0);
        vector<int> res;
        for(int i:nums)
        {
            if(i==0)
                countzero++;
            else
                allpro *= i;
            if(countzero>1)
                return zero;
        }
        int allpro2=allpro;
        if(countzero==1)
            allpro=0;
        for(int i:nums)
        {
            if(i!=0)
                res.push_back(allpro/i);
            else
                res.push_back(allpro2);
        }
        return res;
    }
};
