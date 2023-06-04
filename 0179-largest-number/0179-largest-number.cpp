class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(auto i:nums) {
            ans.push_back(to_string(i));
        }
        sort(begin(ans), end(ans), [](string &s1, string &s2) { 
            return s1+s2>s2+s1; 
        });
                string res;
//         combine the str
        for(auto s:ans) {
            res+=s;
        }
        while(res[0]=='0' && res.length()>1) {
            res.erase(0,1);
        }
        return res;
    }
};