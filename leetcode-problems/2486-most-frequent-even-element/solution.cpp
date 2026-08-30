class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        int m=-1;
        mp[m]=0;
        for (auto& x:nums){
            if (x%2==0){
                mp[x]++;
                cout<<x<<":"<<mp[x]<<"\n";
                if (mp[x]>mp[m]) m=x;
                else if (mp[x]==mp[m]){
                    if (x<m) m=x;
                }
            }
        }
        if (m==-1) return -1;
        else return m;
    }
};
