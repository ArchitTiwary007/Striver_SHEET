/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //tail points the LL's pos element!!
        if(head==NULL || head->next==NULL) return 0;
        ListNode* slow=head;
        ListNode* fast=head;
        //slow and fast pointer approach!!
        while(fast && fast->next )
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return 1;//loop ke ander hi cycle hua tab
        }
        return 0;
    }
};
