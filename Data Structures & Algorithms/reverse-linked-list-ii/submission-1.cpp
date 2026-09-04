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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode dummy(0,head);

        ListNode* beforeLeft = &dummy;

        for(int i = 1; i < left;i++){
            beforeLeft = beforeLeft->next;
        }

        ListNode* subListStart = beforeLeft->next;
        ListNode* prev = nullptr;
        ListNode* curr = subListStart;

        for(int i = 0; i < right - left + 1;i++){

            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;



        }

        beforeLeft->next = prev;
        subListStart->next = curr;

        return dummy.next;


        
        
    }
};