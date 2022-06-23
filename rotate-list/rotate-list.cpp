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
     int count_nodes(ListNode* head)
    {
        int count = 0;
        
        while(head)
        {
            count++;
            
            head = head -> next;
        }
        
        return count;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL)
            return NULL;
        
        // count no of nodes in list
        
        int n = count_nodes(head);
        
        // if k is greater than n
        
        k = k % n;
        
        // curr pointer point to the (n - k)th node from start
        
        ListNode* curr = head;
        
        for(int i = 1; i < n - k; i++)
        {
            curr = curr -> next;
        }
        
        // last pointer point to the last node of the list
        
        ListNode* last = head;
    
        while(last -> next)
        {
            last = last -> next;
        }
        
        // update pointers
        
        last -> next = head;
        
        head = curr -> next;
        
        curr -> next = NULL;
        
        return head;
    }
};