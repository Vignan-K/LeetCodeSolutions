class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> se;
        for (int i:nums1){
            if (find(nums2.begin(),nums2.end(),i)!=nums2.end()) se.insert(i);
        }
        nums1.assign(se.begin(),se.end());
        return nums1;
    }
};
