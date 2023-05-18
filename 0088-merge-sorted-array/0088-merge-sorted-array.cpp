class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*
            Time Complexity: O(mLogm)
            Space Complexity: O(1)
        */
//         all the zeros are already at end
        for(int i=0;i<n;i++) {
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};