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
    void swap(int i,int j,vector<int>& v) {
        int temp = v[i];
        v[i]=v[j];
        v[j] = temp;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int count =0;
        ListNode* t1 = head;
        ListNode* t2 = head;
        vector<int> v;
        while(t1) {
            v.push_back(t1->val);
            t1=t1->next;
            count++;
        }
        swap(k-1,count-k,v);
        for(int x:v)
            cout<<x<<" ";
        int i=0;
        while(t2) {
            t2->val = v[i];
            i++;
            t2=t2->next;
        }
        return head;
    }
};