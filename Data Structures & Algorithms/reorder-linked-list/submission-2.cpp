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

        while(curr != nullptr){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    void reorderList(ListNode* head) {
        if(head->next == nullptr || head == nullptr || head->next->next == nullptr)
        return;


        ListNode *slow = head, *fast = head;
        ListNode *slow_temp = nullptr;
        while(fast != nullptr && fast->next != nullptr){
            slow_temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = nullptr;
        if(fast == nullptr){
            mid = reverse(slow);
            slow_temp->next = nullptr;
        }
        else{
            mid = reverse(slow->next);
            slow->next = nullptr;
        }

        slow = head;

        while(mid != nullptr){
            ListNode *temp = nullptr, *temp1 = nullptr;
            
            while(mid != nullptr && slow != nullptr){
                temp = slow->next;
                temp1 = mid->next;                                                
                slow->next = mid;
                mid->next = temp;
                slow = temp;
                mid = temp1;
            }
        }

        return;
    }
};
