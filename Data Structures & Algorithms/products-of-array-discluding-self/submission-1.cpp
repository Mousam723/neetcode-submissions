class Solution {
public:
    void printt(vector<int> v){
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> lp(n),rp(n),ans(n);
        lp[0]=nums[0];
        rp[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            lp[i]=nums[i]*lp[i-1];
            rp[n-1-i]=nums[n-1-i]*rp[n-i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=rp[i+1];
            }
            else if(i==n-1){
                ans[i]=lp[i-1];
            }
            else{
                ans[i]=lp[i-1]*rp[i+1];
            }
        }
        return ans;
    }
};
