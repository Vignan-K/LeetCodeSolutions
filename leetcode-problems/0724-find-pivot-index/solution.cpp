class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> vtr(nums.size(),0);
        int presum=0;
        for (int i=0;i<nums.size();i++){
            vtr[i]=presum;
            presum+=nums[i];
        }
        int sufsum=0;
        for (int i=(nums.size()-1);i>=0;i--){
            //cout<<i;
            vtr[i]-=sufsum;
            sufsum+=nums[i];
        }
        for (int i=0;i<nums.size();i++){
            if (vtr[i]==0) return i;
        }
        return -1;
    }
};
