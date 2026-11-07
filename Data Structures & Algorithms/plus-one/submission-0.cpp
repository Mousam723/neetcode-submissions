class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int c=0,n=digits.size();
        for(int i=0;i<n;i++){
            int val=0;
            if(i==0){
                val=digits[i]+c+1;
                c=val/10;
                val=val%10;
                digits[i]=val;
            }
            else{
                val=digits[i]+c;
                c=val/10;
                val=val%10;
                digits[i]=val;
            }
        }
        if(c!=0){
            digits.push_back(c);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
