import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int l=nums.length;
        for (int i=0;i<l;i++){
            for (int j=0;j<l;j++){
                if (i!=j){
                    if (nums[i]+nums[j]==target){
                        int[] ans={i,j};
                        return ans;
                    }
                }
            }
        }
        return new int[]{};
    }
}
