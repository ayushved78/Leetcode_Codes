class Solution {
public:
    int kthFactor(int n, int k) {
        /*
            TIME COMPLEXITY: O(n)
            SPACE COMPLEXITY: O(n)
        */
        vector<int> v;
        for(int i=1;i<=n;i++) {
            if(n%i==0)
                v.push_back(i);
        }
        if(k>v.size())
            return -1;
        else
            return v[k-1];
    }
};