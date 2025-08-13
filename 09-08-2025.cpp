class Solution {
public:

    vector<pair<int,int>> vp={{100,0},{75,25},{50,50},{25,75}};
    double solve(int A,int B,vector<vector<double>> &dp){
        if(A<=0 and B<=0)return 0.5;

        if(A<=0)return 1;
    	
        if(B<=0)return 0;

        if(dp[A][B]!=-1)return dp[A][B];
        double p=0;
        for(auto a:vp){
            int A_taken = a.first;
            int B_taken = a.second;

            p+=solve(A-A_taken,B-B_taken,dp);
        }

        return dp[A][B]=p*0.25;
    }

    double soupServings(int n) {

        if(n>=4800)return 1.0;
        vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
        return solve(n,n,dp); 

    }
};
