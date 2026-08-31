class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int ans=0;
        for (auto& x:nums){
            if (x<0) mp[x]++;
            else if (mp.find(-x)!=mp.end()) ans=x;
        }
        return (ans==0) ? -1 : ans;
    }
};
