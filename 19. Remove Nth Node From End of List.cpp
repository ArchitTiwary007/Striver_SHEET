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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //    if(head==NULL || head->next==NULL)
    //    return NULL;

       ListNode*ptr=head;
       ListNode*temp=head;

       //n times aage badhaenge!!
       for(int i=0;i<n;i++)
       ptr=ptr->next;

       //Delete ptr
       if(!ptr) return head->next;

       while(ptr->next)
       {
        //single step badhega
          ptr=ptr->next;
          temp=temp->next;
       }
       temp->next=temp->next->next;
       return head;
    }
};
