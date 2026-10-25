
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        head = prev;

        if (n == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            ListNode* curr1 = head;
            int count = 1;

            while (count < n - 1) {
                curr1 = curr1->next;
                count++;
            }

            ListNode* toDelete = curr1->next;
            curr1->next = toDelete->next;
            delete toDelete;
        }

        prev = nullptr;
        curr = head;

        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }
};
