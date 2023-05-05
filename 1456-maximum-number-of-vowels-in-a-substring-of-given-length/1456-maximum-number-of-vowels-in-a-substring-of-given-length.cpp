class Solution {
public:
    int maxVowels(string s, int k) {
        int maxCount = 0, count = 0;
        unordered_set<char> vows = {'a','e','i','o','u'};
        for(int i=0;i<s.size();i++) {
            if(i>=k && vows.count(s[i-k]))
                count--;
            if(vows.count(s[i]))
                count++;
            maxCount  = max(maxCount,count);
        }
        return maxCount;
    }
};