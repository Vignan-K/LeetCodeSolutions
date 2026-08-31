class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for (char x:s){
            mp[x]++;
        }
        for (char x:t){
            if (mp.find(x)!=mp.end() && mp[x]>0){
                mp[x]--;
                continue;
            }
            return false;
        }
        return true;
    }
};
