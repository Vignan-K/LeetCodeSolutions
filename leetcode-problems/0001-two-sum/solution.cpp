class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        for (int i=0;i<nums.size();i++){
            int othere=target-nums[i];
            if (ump.find(othere)!=ump.end()) return {ump[othere],i};

            ump[nums[i]]=i;
        }
        return {};
    }
};
