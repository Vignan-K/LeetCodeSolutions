class Solution {
public:
    string reverseWords(string s) {
        std::stringstream ss(s);
        string ans;
        string t;
        while (ss>>t){
            ans = t+" "+ ans;
        }
        ans.pop_back();
        return ans;
    }
};
