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
    bool isPalindrome(ListNode* head) {
        string s;
        while(head)
        {
            char ch=char(head->val);
                s.push_back(ch);
            head=head->next;
        }
        if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin())) return true;
        return false;
    }
};