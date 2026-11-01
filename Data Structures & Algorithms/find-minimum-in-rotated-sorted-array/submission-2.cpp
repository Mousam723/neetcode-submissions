class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int l=1,r=nums.size()-2;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                return nums[mid];
            }
            else if(nums[mid]>nums[0]) l=mid+1;
            else r=mid-1;
        }
        return min(nums[0],nums[n-1]);
    }
};
