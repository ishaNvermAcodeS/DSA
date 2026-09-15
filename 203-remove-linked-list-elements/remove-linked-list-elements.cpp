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
        while(head != nullptr && head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp = head;
        ListNode* temp1 = nullptr;
        while(temp!= nullptr){
            if(temp->val == val){
                temp1->next = temp->next;
                delete temp;
                temp = temp1->next;
            }
            else{
                temp1 = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};