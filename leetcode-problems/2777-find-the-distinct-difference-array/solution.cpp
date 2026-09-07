class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        unordered_set<int> st;
        for (int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            ans[i]=st.size();
        }
        st.clear();
        for (int i=nums.size()-1;i>=0;i--){
            ans[i]-=st.size();
            st.insert(nums[i]);
        }
        return ans;
    }
};
