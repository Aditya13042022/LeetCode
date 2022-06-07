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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp==head && temp->val==val)
            {
                int x=temp->val;
                head=temp->next;
            }
            else if(temp!=head && temp->val==val)
            {
                ListNode* tp=head;
                while(tp->next!=temp)
                    tp=tp->next;
                int x=temp->val;
                tp->next=temp->next;
            }
            temp=temp->next;
        }
        return head;
        
    }
};