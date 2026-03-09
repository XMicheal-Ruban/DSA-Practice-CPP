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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //if(head -> next == nullptr) return head;
        if(n == 0) return head;
        if(n == 1 && head->next == nullptr) return nullptr;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;
        while(n-- > 0) second = second ->next;
        while(second ->next != nullptr){
            second = second->next;
            first = first->next;
        }
        ListNode* temp = first->next;
        first->next = first->next->next;
        delete temp;
        head = dummy->next;
        delete dummy;
        return head;
    }
};