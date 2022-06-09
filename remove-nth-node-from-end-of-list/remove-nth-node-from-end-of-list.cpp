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
        if(head==NULL) return head;
        if(head->next==NULL) 
        {
            head=NULL;
            return head;
        }
        ListNode *temp=head; int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        int index=count-n;
        if(index==0)
        {
            head=head->next;
            return head;
        }
        temp=head;
        for(int i=1;i<index;i++)
            temp=temp->next;
        temp->next=temp->next->next;
        return head;
    }
};