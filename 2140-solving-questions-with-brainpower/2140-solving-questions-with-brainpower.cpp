class Solution {
public:
//     based on memorisation and not the best solution
    long long solve(vector<vector<int>>& q, int i,int n, vector<int> dp) {
        if(i>=n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
//         take the 0th index + value after skip 0th index
        long long count = q[i][0] + solve(q,i+q[i][1]+1,n,dp);
//         skip the value here
        long long skip = solve(q,i+1,n,dp);
        dp[i] = max(count,skip);
        return dp[i];
        
    }
    long long mostPoints(vector<vector<int>>& q) {
        int n = q.size();
        vector<long long> dp(n+1,0);
        
        for(int i=n-1;i>=0;i--) {
            int skip = min(n,i+q[i][1]+1);
            long long count = q[i][0] + dp[skip];
            long long skipProb = dp[i+1];
            dp[i] = max(count,skipProb);
        }
        return dp[0];        
    }
};