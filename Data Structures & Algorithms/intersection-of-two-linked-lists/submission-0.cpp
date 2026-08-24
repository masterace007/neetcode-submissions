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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*> arr;

        ListNode *temp = headA;
        while(temp != nullptr){
            arr.insert(temp);
            temp = temp->next;
        }

        temp = headB;
        bool flag = false;
        while(temp != nullptr){
            if(arr.count(temp))
            return temp;

            temp = temp->next;
        }

        return nullptr;
    }
};