class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int l=1,r=nums.size()-2;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[0]) l=mid+1;
            else r=mid-1;
        }
        if(nums[0]<nums[n-1]){
            return 0;
        }
        else return n-1;
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l1=0,l2=findMin(nums);
        int r1,r2;
        if(l1==l2){
            r1=n-1;
            r2=n-1;
        }
        else r1=l2-1,r2=n-1;
        cout<<l1<<r1<<l2<<r2<<endl;
        if(target>=nums[l1]){
            while(l1<=r1){
                int mid=l1+(r1-l1)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) r1=mid-1;
                else l1=mid+1;
            }
        }
        else if(target>=nums[l2]){
            while(l2<=r2){
                int mid=l2+(r2-l2)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) r2=mid-1;
                else l2=mid+1;
            }
        }
        return -1;
    }
};
