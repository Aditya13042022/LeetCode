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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1(headA),*temp2(headB);
        int n1(0),n2(0),d(0);
        
        while(temp1)
        {
            n1++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            n2++;
            temp2=temp2->next;
        }
        d=abs(n1-n2);
        temp1=headA;temp2=headB;
        if(n1>n2)
        {
            for(int i=0;i<d;i++)
                temp1=temp1->next;
        }
        else
        {
            for(int i=0;i<d;i++)
                temp2=temp2->next;
        }
        
        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};