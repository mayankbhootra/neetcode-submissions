class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string str:strs)
            res += str + "Mayank";
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int start = 0;
        int end = s.find("Mayank");

        while(end!=string::npos)
        {
            res.push_back(s.substr(start,end-start));
            start = end + 6;
            end = s.find("Mayank",start);
        }
        // res.push_back(s.substr(start));
        return res;
    }
};
