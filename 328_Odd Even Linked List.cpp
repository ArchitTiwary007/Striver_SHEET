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
    ListNode* oddEvenList(ListNode* head) {
      //m1
        // vector<int>arr;//array for LL elements!
        // vector<int>ans;//for final result!
        // ListNode*temp=head;
        // while(temp)
        // {
        //     arr.push_back(temp->val);
        //     temp=temp->next;
        // }
        // //separating indices and placing it in final ans array!!
        // for(int i=0;i<arr.size();i=i+2)//even indices!!
        // {
        //     ans.push_back(arr[i]);
        // }
        // for(int i=1;i<arr.size();i=i+2)//odd indices
        // {
        //     ans.push_back(arr[i]);
        // }
        // //reset!!
        // temp=head;
        // int i=0;
        // while(temp)
        // {
        //     temp->val=ans[i++];
        //     temp=temp->next;
        // }
        // return head;

        //optimised!!
        //concept: slow and fast pointer!!
       if(head==NULL || head->next==NULL) return head;

       ListNode*odd=head;
       ListNode*even=head->next;
       ListNode*evenhead=even;
       while(even && even->next)
       {
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
       }
       odd->next=evenhead;
       return head;

    }
};
