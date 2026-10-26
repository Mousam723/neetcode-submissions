class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        set<int> st(nums.begin(),nums.end());
        vector<int> val(st.begin(),st.end());
        int s=INT_MIN,x=1;
        // if(val.size()<=1) return 1;
        for(int i=1;i<val.size();i++){
            if(val[i]!=val[i-1]+1){
                s=max(s,x);
                x=1;
            }
            else x++;
        }
        s=max(s,x);
        return s;
    }
};
