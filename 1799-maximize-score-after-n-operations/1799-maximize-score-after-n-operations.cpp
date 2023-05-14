class Solution {
public:
//     REFERRED YOUTUBE SOLVE AGAIN
    unordered_map<int,int> lookup;
    int solve(int a, int mask, vector<int> nums,int m){
        if(mask==0) return 0;
        int key = a+mask*10;
        if(lookup.find(key)==lookup.end()) {
            int maxVal = 0;
            for(int i=0;i<m;i++) {
                if(mask&(1<<i)) {
                    for(int j=i+1;j<m;j++) {
                        if(mask&(1<<j)) {
                            maxVal = max(maxVal,a*__gcd(nums[i],nums[j])+solve(a+1,mask^(1<<i)^(1<<j),nums,m));
                        }
                    }
                }
            }
            lookup[key] = maxVal;
        }
        return lookup[key];
    }
    int maxScore(vector<int>& nums) {
        int m = nums.size();
        return solve(1,(1<<m)-1,nums,m);
    }
};