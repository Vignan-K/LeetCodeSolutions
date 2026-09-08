class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=-DBL_MAX;
        cout<<ans;
        int left=0;
        int tot=0;
        for (int right=0;right<nums.size();right++){
            tot+=nums[right];
            if (right-left+1==k){
                double temp=(double)tot/k;
                //cout<<temp;
                if (temp>ans) {
                    ans=temp;
                    //cout<<ans;
                }
                tot-=nums[left];
                left++;
            }
        }
        return ans;
    }
};
