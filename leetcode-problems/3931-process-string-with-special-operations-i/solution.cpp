class Solution {
public:
    string processStr(string s) {
        std::string ans;
        for (char c:s){
            if (std::isalpha(c)){
                ans+=c;
            }else if(c=='*'){
                if (ans.length()>0){
                    ans.pop_back();
                }
            }else if(c=='#'){
                ans=ans+ans;
            }else{
                std::reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};
