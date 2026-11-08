class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(stones.size()>1){
            int n=stones.size();
            sort(stones.begin(),stones.end());
            if(stones[n-1]>stones[n-2]){
                stones[n-1]-=stones[n-2];
                stones.erase(stones.begin()+n-2);
            }
            else{
                stones.erase(stones.begin()+n-1);
                stones.erase(stones.begin()+n-2);
            }
        }

        if(stones.size()==0){
            return 0;
        }
        return stones[0];
    }
};
