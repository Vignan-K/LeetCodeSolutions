class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int tot=0;
        for (int i=0;i<nums.size();i++){
            tot+=nums[i];
            ans[i]=tot;
        }
        return ans;
    }
};
