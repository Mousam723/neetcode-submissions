class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp;
        bool ans=true;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            if(mp[c]==0){
                ans=false;
                break;
            }
            mp[c]--;
        }
        return ans;
    }
};
