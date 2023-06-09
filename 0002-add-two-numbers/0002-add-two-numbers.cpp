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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int carry = 0;
//         addition logic
        while(l1 && l2) {
            int value = l1->val + l2->val + carry;
//             for a case where value exceed 9, store it to carry: 11/10 -> 1
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3=l3->next;
            l1=l1->next;
            l2=l2->next;
        }
//         cases when l1 and l2 are not equal
        while(l1) {
            int value = l1->val + carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3=l3->next;
            l1=l1->next;
        }
        while(l2) {
            int value = l2->val + carry;
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3=l3->next;
            l2=l2->next;
        }
//         if carry is left out assign that as the last value of the LL
        if(carry)
            l3->next = new ListNode(carry);
//         as the first element points 0, go from the next element
        return head->next;
    }
};