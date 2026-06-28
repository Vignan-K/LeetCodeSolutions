class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int left=0;
        int right=n-1;
        int index=n-1;
        while (left<=right){
            int leftS=nums[left]*nums[left];
            int rightS=nums[right]*nums[right];
            if (leftS>rightS){
                ans[index]=leftS;
                left++;
            }else{
                ans[index]=rightS;
                right--;
            }
            index--;
        }
        return ans;
    }
};
