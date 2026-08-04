class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        auto[minNo,maxNo]=std::minmax_element(nums.begin(),nums.end());
        std::unordered_set<int> tempset(nums.begin(),nums.end());
        std::vector<int> ans;
        for (int i= *minNo;i<= *maxNo;i++){
            if (!tempset.contains(i)) ans.push_back(i);
        }
        return ans;
    }
};
