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
    ListNode* reverseKGroup(ListNode* head, int k) {
    //Count the nodes
    // (BRUTEFORCE!!)+Recursion
    //   int count=0;
    //   ListNode*temp=head;
    //   while(temp)
    //   {
    //     count++;
    //     temp=temp->next;
    //   }

    //   if(count<k) return head;

    //   int count2=0;
    //   ListNode* prev=NULL;
    //   ListNode* curr=head;
    //   //reverse the nodes by k groups
    //   while(curr && count2<k)
    //   {
    //     ListNode* t =curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=t;
    //     count2++;
    //   }
    //   head->next=reverseKGroup(curr,k);//for remaining nodes
    //   return prev;

    //method-2
    ListNode*dummy=new ListNode(0);
    dummy->next=head;

    ListNode*prevgroup=dummy;

    while(1)
    {
        ListNode*kth=prevgroup;
        for(int i=0;i<k && kth;i++)
        {
            kth=kth->next;
        }

        if(kth==NULL) break;

        ListNode* nextgroup=kth->next;
        ListNode*prev=nextgroup;
        ListNode*curr=prevgroup->next;

        while(curr!=nextgroup)
        {
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        ListNode*temp=prevgroup->next;
        prevgroup->next=kth;
        prevgroup=temp;
    }
    return dummy->next;

    }
};
