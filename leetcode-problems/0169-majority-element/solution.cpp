class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        if (l==1){ return nums[0]; }
        map<int,int> mp;
        for (auto& x:nums){
            if (mp.find(x)!=mp.end()){
                mp[x]++;
                if (mp[x]>l/2) return x;
            }else{ mp[x]++;}
        }
        return 0;
    }
};
