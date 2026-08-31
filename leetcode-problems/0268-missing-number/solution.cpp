class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ESum=n*(n+1)/2;
        int ASum=0;
        for (int x:nums){
            ASum+=x;
        }
        return ESum-ASum;
    }
};
