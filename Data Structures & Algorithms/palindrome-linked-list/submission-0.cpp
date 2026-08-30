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
    ListNode *reverse(ListNode *node){
        ListNode *curr = node, *prev = nullptr;

        while(curr){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        ListNode *last = slow;
        if(!head->next)
        return 1;

        while(fast && fast->next){
            last = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        last->next = nullptr;

        
        if(fast && !fast->next){   
            slow = slow->next;
        }
        last = reverse(head);

        while(last && slow){
            if(slow->val != last->val)
            return false;
            slow = slow->next;
            last = last->next;
        }
        if(last != slow)
        return false;
        return 1;
    }
};