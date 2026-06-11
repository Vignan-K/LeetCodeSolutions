class Solution {
public:
    int lengthOfLastWord(string s) {
        std::vector<std::string> l;
        std::string word;
        stringstream ss(s);
        while (ss>>word){
            l.push_back(word);
        }
        std::string le=l.back();
        return le.size();

    }
};
