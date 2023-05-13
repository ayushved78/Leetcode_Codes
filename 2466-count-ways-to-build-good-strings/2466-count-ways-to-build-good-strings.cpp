class Solution {
public:
    int MOD = 1e9+7;
    int countGoodStrings(int low, int high, int zero, int one) {
        long long int ans = 0;
        vector<int> dp(high+1,0);
        dp[0]=1;
        for(int  len=1;len<=high;len++) {
            int total = 0;
            if(len>=zero) {
                total+=dp[len-zero];
            }
            if(len>=one) {
                total+=dp[len-one];
            }
            dp[len] = total%MOD;
        }
        for(int len=low;len<=high;len++) {
            ans+=dp[len];
        }
        
        return ans%MOD;
    }
};