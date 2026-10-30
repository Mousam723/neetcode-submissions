class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s.length()%2!=0) return false;
        for(char c:s){
            if(c=='[' || c=='{' || c=='('){
                stk.push(c);

            }
            else if(!stk.empty() && ((c==']' && stk.top()=='[') || (c=='}' && stk.top()=='{') || (c==')' && stk.top()=='('))){
                stk.pop();
            }
            else{

                return false;
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
    }
};
