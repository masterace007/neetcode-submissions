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
        if(head == nullptr)
        return nullptr;
        if(head->next == nullptr && head->val == val)
        return nullptr;

        if(head->next == nullptr && head->val != val)
        return head;
        
        ListNode *temp = new ListNode(-1);
        temp->next = head;
        ListNode *temp_head = temp;
        while(temp_head != nullptr){
            if(temp_head->next != nullptr && temp_head->next->val == val){
                ListNode *x = temp_head->next;
                while(x != nullptr && x->val == val){
                    x = x->next;
                }
                temp_head->next = x;
            }
            temp_head = temp_head->next;
        }
        if(temp->next != nullptr && temp->next->val == val)
        return nullptr;

        return temp->next;
    }
};