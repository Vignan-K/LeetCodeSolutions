class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> vtr;
        for (auto& x:nums){
            //cout<<x;
            mp[x]++;
            if (mp.find(x)!=mp.end()){
                if ((mp[x])>(nums.size()/3)){
                    //cout<<" "<<x;
                    if (find(vtr.begin(),vtr.end(),x)==vtr.end()) vtr.push_back(x);
                }
            }
        }
        return vtr;
    }
};
