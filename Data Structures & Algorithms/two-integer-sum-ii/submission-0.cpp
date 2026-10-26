class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> v;
        int l=0,r=n.size()-1;
        while(l<r){
            if(n[l]+n[r]==t){
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(n[l]+n[r]>t) r--;
            else l++;
        }
        return v;
    }
};
