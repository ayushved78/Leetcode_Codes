class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
//         check the edge cases
        if(k==0 || n>k+maxPts) return 1;
//         create a dp of size n+1 with 0.1 value
        vector<double> dp(n+1,0.0);
        dp[0] = 1;
        double ans = 0.0;
        double cur_sum = 1;
//         loop to check val of dp[i], cur_sum and asn;
        for(int i = 1;i<=n;i++){
            dp[i] = cur_sum/maxPts;
            if(i<k)
                cur_sum += dp[i];
            else
                ans += cur_sum/maxPts;
            
            if(i-maxPts>=0)
                cur_sum -= dp[i-maxPts];
        }
        return ans;
    }
};