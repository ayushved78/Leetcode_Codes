class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         create sets first
        set<int> s1,s2;
//         vector of vector that takes only 2 vals
        vector<vector<int>> ans(2);
//         insert values to set
        for(int i:nums1)
            s1.insert(i);
        for(int i:nums2)
            s2.insert(i);
        
//         checkk the loop
        for(int i:s1)
            if(s2.count(i)==0)
                ans[0].push_back(i);
        for(int i:s2)
            if(s1.count(i)==0)
                ans[1].push_back(i);
        return ans;
    }
};