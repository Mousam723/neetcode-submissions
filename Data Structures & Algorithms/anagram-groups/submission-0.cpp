class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string i:strs){
            string srt=i;
            sort(srt.begin(),srt.end());
            mp[srt].push_back(i);
        }
        // for(auto i:mp){
        //     cout<<i.first<<"-";
        //     for(auto j:i.second){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        for(auto i:mp){
            vector<string>s=i.second;
            ans.push_back(s);
        }
    //     std::sort(ans.begin(), ans.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
    //     return a.size() < b.size();
    // });
        return ans;
    }
};
