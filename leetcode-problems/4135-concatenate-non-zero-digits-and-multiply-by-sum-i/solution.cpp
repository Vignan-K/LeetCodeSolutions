class Solution {
public:
    long long sumAndMultiply(int n) {
        std::string s;
        int sum=0;
        std::string st=to_string(n);
        for (char c:st){
            if (c!='0'){
                s.push_back(c);
                sum+=c-'0';
            }
        }
        long long f;
        if (s.size()!=0) f=stoi(s);
        else f=1;
        return f*sum;
    }
};
