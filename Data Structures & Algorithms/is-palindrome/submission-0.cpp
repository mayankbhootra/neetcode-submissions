#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string refined = "";
        for(char c:s){
            if(((c>='A')&&(c<='Z')) || ((c>='a') && (c<='z')) || ((c>='0') && (c<='9')))
                refined.push_back(tolower(c));
        }
        int j = refined.size()-1;
        for(int i=0;i<=j;i++,j--){
            if(refined[i]!=refined[j])
                return false;
        }
        return true;
    }
};
