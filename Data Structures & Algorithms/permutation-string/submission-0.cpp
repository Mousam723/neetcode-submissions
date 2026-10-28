class Solution {
public:
    bool check(string s,string r){
        if(s==r) return true;
        sort(s.begin(),s.end());
        sort(r.begin(),r.end());
        if(s==r) return true;
        return false;
    }
    bool checkInclusion(string s1, string s2) {
        int n=s1.length(),m=s2.length();
        string s="";

        for(int i=0;i<n;i++){
            s+=s2[i];
        }
        // cout<<s<<" "<<s1<<endl;
        if(check(s,s1)){
            return true;
        }
        for(int i=n;i<m;i++){
            s+=s2[i];
            s.erase(0,1);
            // cout<<s<<endl;
            if(check(s,s1)) return true;
        }
        return false;
    }
};
