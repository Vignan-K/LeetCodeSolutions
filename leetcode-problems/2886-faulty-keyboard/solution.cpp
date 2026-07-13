class Solution {
public:
    string finalString(string s) {
        string ans;
        for (char c:s){
            if (c!='i') ans.push_back(c);
            else{
                std::reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};
