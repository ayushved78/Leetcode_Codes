class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
//         TWO-POINTER APPROACH
        for(int i=0;i<nums.size();i++) {
            int first = nums[i];
            int start=i+1,end=nums.size()-1;
            while(start<end) {
                int sum = first + nums[start] + nums[end];
                if(sum==target) {
                    s.insert({first,nums[start],nums[end]});
                    start++;
                    end--;
                } else if(sum<target)
                    start++;
                else
                    end--;
            }
        }
//         iterate the set and push the values
        for(auto val:s)
            ans.push_back(val);
//         return the vector output
        return ans;
    }
};