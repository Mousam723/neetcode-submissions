class Solution {
public:
    set<int> st;
    bool isHappy(int n) {
        if(n==1) return true;
        int t=n;
        int s=0;
        while(t>0){
            s+=pow(t%10,2);
            t=t/10;
        }
        if(st.contains(s)) return false;
        st.insert(s);
        return isHappy(s);
    }
};
