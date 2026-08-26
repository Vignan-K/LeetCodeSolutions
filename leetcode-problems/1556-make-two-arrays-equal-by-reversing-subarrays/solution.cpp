class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mp;
        for (auto& x:arr){
            mp[x]++;
        }
        for (auto& x:target){
            if (mp.find(x)!=mp.end() && mp[x]>0){
                mp[x]--;
            }else { return false; }
        }
        return true;
    }
};
