class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            if(target >= matrix[i][0] && target<= matrix[i][m]){
                int l=0,r=m;
                while(l<=r){
                    int mid=l+(r-l)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }
                    else if(matrix[i][mid]<target) l=mid+1;
                    else r=mid-1;
                }
            }
        }
        return false;
    }
};
