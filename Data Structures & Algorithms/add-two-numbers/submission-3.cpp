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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1 = nullptr, *head2 = nullptr;
        head1 = l1;
        head2 = l2;
        int carry = 0;
        ListNode *last = nullptr;

        ListNode *head_return = nullptr;

        while(head1 != nullptr && head2 != nullptr){
            int temp = head1->val + head2->val + carry;
            int dg = temp % 10;
            carry = temp / 10;
            
            head1->val = dg;
            if(!head_return)
            head_return = head1;

            last = head1;
            head1 = head1->next;
            head2 = head2->next;
        }
        if(carry != 0){
            if(head2 != nullptr)
            last->next = head2;

            while(head2 != nullptr){
                int temp = carry + head2->val;
                int dg = temp % 10;
                carry = temp / 10;
                head2->val = dg;
                last = head2;
                head2 = head2->next;
            }
            
            if(carry != 0)
            {

                while(head1 != nullptr){
                    int temp = carry + head1->val;
                    int dg = temp % 10;
                    carry = temp / 10;
                    head1->val = dg;
                    last = head1;
                    head1 = head1->next;
                }
                if(carry != 0){
                    ListNode *temp = new ListNode(carry);
                    last->next = temp;
                    last = temp;
                }
            }
        }
        else{
            if(head2 != nullptr)
            last->next = head2;
        }
        

        return head_return;

    }
};
