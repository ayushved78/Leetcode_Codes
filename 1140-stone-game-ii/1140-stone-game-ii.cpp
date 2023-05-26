class Solution {
public:
    /*
        COPIED DO THAT AGAIN ONCE GOOD WITH DP, STREAK 25
    */
    int dp[101][201];
    int helper(int i, int M, vector<int>& piles){
        if(i>=piles.size()) return 0;
        if(dp[i][M]!=-1) return dp[i][M];
        int total=0;
        int res=INT_MIN;
        for(int j=0;j<2*M;j++){
            if(i+j<piles.size()){
                total+=piles[i+j];
                res=max(res,total-helper(i+j+1,max(M,j+1),piles));
            }
        }
        return dp[i][M]=res;
    }
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof dp);
        int sum = 0;
        for(auto a:piles) sum+=a;
        int diff = helper(0,1,piles);
        return (sum+diff)/2;
    }
};