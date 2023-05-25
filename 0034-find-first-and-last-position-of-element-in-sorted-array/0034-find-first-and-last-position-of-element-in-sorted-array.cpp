class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        /*
            TIME COMPLEXITY: O(N)
            SPACE COMPLEXITY: O(1)
        */
        int first = -1;
        int last = -1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != target) 
                continue;
            else if(first == -1) {
                first = i;
                last = i;
            }
            else {
                last = i;
            }
        }
        
        if(first !=-1)
            return {first,last};
        else
            return {-1,-1};
    }
};