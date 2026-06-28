class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (int a:nums){
            if (st.count(a)) return a;
            else{
                st.insert(a);
            }
        }
        return 0;
    }
};
