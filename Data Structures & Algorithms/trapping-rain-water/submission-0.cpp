class Solution {
public:
    int trap(vector<int>& height) {
        //0,2,0,3,1,0,1,3,2,1
        //3,3,3,3,3,3,3,3,2,1
        //0,2,2,3,3,3,3,3,3,3
        int n=height.size();
        vector<int> lmax(n),rmax(n);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<height.size();i++){
            lmax[i]=max(lmax[i-1],height[i]);
            rmax[n-i-1]=max(rmax[n-i],height[n-i-1]);
        }
        int val=0;
        for(int i=0;i<height.size();i++){
            val+=min(lmax[i],rmax[i])-height[i];
        }
        return val;
    }
};
