class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        for (int i=0;i<l;++i){
            for (int j=0;j<l;++j){
                if (i==j){continue;}
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }else{
                    continue;
                }
            }
        }
        return {0};
    }
};
