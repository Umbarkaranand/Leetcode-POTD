class Solution {
public:
    int solve(vector<vector<int>>& events,int index, int k,vector<vector<int>> &dp){
        if(index >= events.size() || k==0)return 0;
        if(dp[index][k]!=-1)return dp[index][k];
        int nextIndex=index+1;
        while(nextIndex<events.size() and events[index][1]>=events[nextIndex][0]){
            nextIndex++;
        }

        int pick = events[index][2]+solve(events,nextIndex,k-1,dp);
        int noPick = solve(events,index+1,k,dp);

        return dp[index][k]=max(pick,noPick);

    }
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end());
        int n = events.size();
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return solve(events,0,k,dp);
    }
};
