class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size());
        int presum=0;
        for (int i=0;i<nums.size();i++){
            ans[i]=presum;
            presum+=nums[i];
        }
        int sufsum=0;
        for (int i=nums.size()-1;i>=0;i--){
            ans[i]-=sufsum;
            sufsum+=nums[i];
        }
        for (int i=0;i<ans.size();i++){
            if (ans[i]<0) ans[i]=-(ans[i]);
        }
        return ans;
    }
};
