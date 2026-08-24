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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = nullptr;
        ListNode *head_return = nullptr;
        bool flag = true;

        if(list1 == nullptr || list2 == nullptr){
            if(list1 == nullptr && list2 == nullptr)
            return nullptr;
            return list1 == nullptr ? list2 : list1;
        }

        while(list1 != nullptr || list2 != nullptr){
            if(head1 != nullptr && flag){
                flag = false;
                head_return = head1;
            }
            if(list1 != nullptr && list2 != nullptr && list1->val <= list2->val){
                if(head1 == nullptr){
                    head1 = list1;
                }
                else{
                    head1->next = list1;
                    head1 = list1;
                }
                list1 = list1->next;
            }
            else{
                if(list1 != nullptr && list2 != nullptr && list1->val > list2->val){
                    if(head1 == nullptr)
                    head1 = list2;
                    else
                    head1->next = list2;
                    head1 = list2;
                    list2 = list2->next;
                }
                else{
                    if(list1 != nullptr && list2 == nullptr){
                        head1->next = list1;
                        head1 = list1;
                        list1 = list1->next;
                    }
                    else if(list1 == nullptr && list2 != nullptr){
                        head1->next = list2;
                        head1 = list2;
                        list2 = list2->next;
                    }
                    else{
                        head1->next = list2;
                        head1 = list2;
                        list2 = list2->next;
                    }
                }
            }
        }

        return head_return;
    }
};
