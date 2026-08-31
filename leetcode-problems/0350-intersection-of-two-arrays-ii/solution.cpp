class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for (auto& x:nums1) mp[x]++;
        vector<int> vtr;
        for (auto& x:nums2){
            if (mp.find(x)!=mp.end() && mp[x]>0){
                vtr.push_back(x);
                mp[x]--;
            }

        }
        return vtr;
    }
};
