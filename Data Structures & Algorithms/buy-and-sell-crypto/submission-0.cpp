class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> rmax(n);
        rmax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],prices[i]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,rmax[i]-prices[i]);
        }
        return ans;
    }
};
