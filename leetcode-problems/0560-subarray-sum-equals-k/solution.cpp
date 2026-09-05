class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int count=0;
        int totSum=0;
        int left=0;
        for (int right=0;right<nums.size();right++){
            totSum+=nums[right];
            int a=totSum-k;
            if (mp.find(a)!=mp.end()){
                count+=mp[a];
            }
            mp[totSum]++;
        }
        return count;
    }
};
