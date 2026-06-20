class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            auto m=std::min_element(nums.begin()+i,nums.end());
            std::swap(nums[i],*m);
        }
    }
};
