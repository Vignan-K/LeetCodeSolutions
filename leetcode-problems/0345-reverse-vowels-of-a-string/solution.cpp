class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vol={'a','e','i','o','u'};
        int left=0;
        int right=s.size()-1;
        while (left<right){
            while (find(vol.begin(),vol.end(),tolower(s[left]))==vol.end() && left<right) left++;
            while (find(vol.begin(),vol.end(),tolower(s[right]))==vol.end() && left<right) right--;
            if (left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }   
        }
        return s;
    }
};
