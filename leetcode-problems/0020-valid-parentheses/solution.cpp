class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        if (s[0]==')' || s[0]=='}' || s[0]==']'){return false;}
        for (char t:s){
            if (t=='(' || t=='{' || t=='['){
                stk.push(t);
            }else{
                if (stk.empty()){return false;}
                if ((t==')'&&stk.top()=='(') || (t=='}'&&stk.top()=='{') || (t==']'&&stk.top()=='[')){
                    stk.pop();
                }else{
                    return false;
                }
            }
        }
        if (!stk.empty()){
            return false;
        }else{
            return true;
        }
    }
};
