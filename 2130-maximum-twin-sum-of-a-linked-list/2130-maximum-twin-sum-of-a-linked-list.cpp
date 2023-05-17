/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int ans = 0;
        vector<int> v;
        ListNode* temp = head;
        while(head) {
            v.push_back(head->val);
            head=head->next;
        }
        int start = 0, end = v.size()-1;
        while(start<end) {
            ans = max((v[start]+v[end]),ans);
            start++;
            end--;
        }
        return ans;
    }
};