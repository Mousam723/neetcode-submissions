class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string s:tokens){
            if(s=="+" ||s=="-" ||s=="*" ||s=="/" ){
                int val1=stk.top();
                stk.pop();
                int val2=stk.top();
                stk.pop();
                int ans=0;
                if(s=="+"){
                    ans=val2+val1;
                }
                else if(s=="*"){
                    ans=val2*val1;
                }
                else if(s=="-"){
                    ans=val2-val1;
                }
                else if(s=="/"){
                    ans=val2/val1;
                }
                stk.push(ans);
                ans=0;
            }
            else{
                stk.push(stoi(s));
            }
        }
        return (stk.top());
    }
    
};
