class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        int curr=0;
        for(auto i:arr)mp[i]++;
        for(auto x:arr) {
            if(mp[x]>1) continue;
            curr++;
            if(curr==k)return x;
        }
        return "";
    }
};