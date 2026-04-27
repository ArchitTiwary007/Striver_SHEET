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
//concept1:stack wala
//concept2:slow and fast pointer plus reverse the second half
    bool isPalindrome(ListNode* head) {
    // stack<int>s;
    // if(!head && !head->next) return 1;
    // ListNode*temp=head;
    // while(temp)
    // {
    //     s.push(temp->val);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp)
    // {
    //     if(s.top()!= temp->val)
    //     return 0;

    //     s.pop();
    //     //update temp
    //     temp=temp->next;
    // }
    // return 1;

    //slow and fast pointer (M-2)
    ListNode*slow=head;
    ListNode*fast=head;
    if(!head || !head->next) return 1;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    // slow=head;
    ListNode*prev=NULL;
    while(slow)
    {
        ListNode*temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
    }
    slow=head;//last m reset
    ListNode*left=head;
    ListNode*right=prev;
    while(right)
    {
        if(left->val!=right->val)
        return 0;

        left=left->next;
        right=right->next;
    }
    return 1;

    }
};
