class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans=false;
        unordered_map<int,int> mp;
        for(int i:nums){
            if(mp.contains(i)){
                ans=true;
                break;
            }
            mp[i]++;
        }
        return ans;
    }
};