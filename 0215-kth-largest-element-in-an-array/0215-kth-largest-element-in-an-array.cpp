class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//         easy solution but not the best solution
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
        
    }
};