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
    ListNode* swapPairs(ListNode* head) {
//         1,2,3,4,5: first points at 1
        ListNode* first=head;
//         dmmy -> 0
        ListNode* dummy = new ListNode(0);
//         prev->dummy: prev = 0
        ListNode* prev = dummy;
//         0 -> prev-> next first(1,2,3,4,5) == 0-1-2-3-4-5
        prev->next = first;
        
        while(first && first->next) {
//             second points to 2 in 1-2-3-4-5
            ListNode* second = first->next;
//             future points to 3 in 1-2-3-4-5
            ListNode* future = first->next->next;
//             1-2-3-4-5: 2-1 3-4-5
            second->next = first;
//             prev->next refers to 1: 2-1 3-4-5::2-1-3-4-5
            prev->next = second;
//             3 becomes the future now for further operations
            first->next = future;
//             move the pointers
            prev = first;
            first = future;
        }
//         point the next element skipping the entry 0 made by us
        return dummy->next;
    }
};