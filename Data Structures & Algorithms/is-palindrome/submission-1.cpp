class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char c:s){
            if(isspace(c)){
                continue;
            }
            else if(isupper(c))
            {
                res+=static_cast<char>(tolower(c));
            }
            else if(isalnum(c)){
                res+=c;
            }
        }
        int l=0,r=res.length()-1;
        bool ans=true;
        while(l<r){
            if(res[l]!=res[r]){
                ans=false;
                break;
            }
            else{
                l++;
                r--;
            }
        }
        return ans;
    }
};
