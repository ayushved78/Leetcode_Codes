class Solution {
public:
    int maximumCount(vector<int>& nums) {
        /* 
            Time Complexity: O(n)
            Space Complexity: O(1)
        */
        int count_p = 0;
        int count_n = 0;
        for(auto i:nums) {
            if (i==0)
                continue;
            else if(i<0)
                count_n++;
            else
                count_p++;
        }
        return max(count_n,count_p);
    }
};