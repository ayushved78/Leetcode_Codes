class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle) return 0;
        int hLen = haystack.size();
        int nLen = needle.size();
        
        for(int i=0;i<=(hLen-nLen);i++) {
            string s = haystack.substr(i,nLen);
            if(s==needle) {
                return i;
                break;
            }
        }
        return -1;
    }
};