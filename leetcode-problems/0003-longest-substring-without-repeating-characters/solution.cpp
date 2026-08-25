class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> vtr;
        int ans=0;
        for (auto& x:s){
            auto it = std::find(vtr.begin(),vtr.end(),x);
            if (it!=vtr.end()){
                ans =(ans<vtr.size()) ? vtr.size() : ans;
                vtr.erase(vtr.begin(),it+1);
            }
            vtr.push_back(x);
        }
        return (vtr.size()>ans) ? vtr.size() : ans;
    }
};
