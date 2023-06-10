class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for(auto i:nums) {
//             till the val of i doesn't match i, increment idx and place the element i
            if(i != val) {
                nums[idx++] = i;
            }
        }
        return idx;
    }
};