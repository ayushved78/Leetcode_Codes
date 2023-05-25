class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        /*
            TIME COMPLEXITY: O(N)
            SPACE COMPLEXITY: O(N)
            can be more optimised
        */
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == target) {
                ans.push_back(i);
                continue;
            }
        }
        return ans;
    }
};