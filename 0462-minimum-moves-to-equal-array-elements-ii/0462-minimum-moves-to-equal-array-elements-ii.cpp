class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int moves=0;
//         get the middle element in the sorted array
        int mid = nums[n/2];
        for(int i=0;i<n;i++) {
//          store the difference between mid element and nums[i] to return
            moves+=abs(nums[i]-mid);
        }
        return moves;
    }
};