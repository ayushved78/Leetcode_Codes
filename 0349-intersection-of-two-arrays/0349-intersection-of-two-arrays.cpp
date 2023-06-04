class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto i:nums1) {
            mp[i]++;
        }
//         if a number from nums1 is found in nums 2 mark the map as false and push the element to the solution
        for(auto i:nums2) {
            if(mp[i]) {
                mp[i]=false;
                ans.push_back(i);
            }
        }
        return ans;
    }
};