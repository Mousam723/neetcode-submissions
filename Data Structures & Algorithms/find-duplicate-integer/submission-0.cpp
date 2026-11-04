class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> chk(n,0);
        for(int i=0;i<n;i++){
            if(chk[nums[i]]!=0) return nums[i];
            chk[nums[i]]=1;
        }
        return 0;
    }
};
