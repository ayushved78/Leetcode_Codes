class Solution {
public:
    /*
        TIME COMPLEXITY: O(n^2)
        SPACE COMPLEXITY: O(1)
    */
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = INT_MIN;
        for(int i=0;i<accounts.size();i++) {
            int sum = 0;
            for(int j=0;j<accounts[i].size();j++) {
                sum += accounts[i][j];
            }
            n = max(n,sum);
        }
        return n;
    }
};