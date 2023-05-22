class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
//         make a priority queue
        priority_queue<pair<int,int>> m;
        for( auto i : mp) {
//             push the element as a pair to queue
            m.push(make_pair( i.second, i.first));
        }     
//         push to ans vector 
        for( int i =0;i<k ; i++) {
            ans.push_back( m.top().second);
            m.pop();
        }      
        return ans;
    }
};