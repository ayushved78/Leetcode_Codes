class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod = 0;
        for(int i:nums) {
            if(i == 0)
                return 0;
            if(i<0)
                prod++;
        }
        return prod%2?-1:1;
    }
};