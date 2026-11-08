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
        int carry = 0;
        
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(curr1 != nullptr || curr2 != nullptr || carry != 0){
            int val1 = (curr1 != nullptr) ? curr1->val : 0;
            int val2 = (curr2 != nullptr) ? curr2->val : 0;
            int sum = val1 + val2 + carry;

            int digit = sum % 10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            if(curr1 != nullptr){
                curr1 = curr1->next;
            }
            if(curr2 != nullptr){
                curr2 = curr2->next;
            }
        }
        return dummy.next;
    }
};
