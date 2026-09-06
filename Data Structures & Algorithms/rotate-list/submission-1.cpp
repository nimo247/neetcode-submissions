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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr || k == 0){

            return head;
        }

        ListNode* temp = head;
        int count = 1;

        while(temp->next != nullptr){

            count++;
            temp= temp->next;
        }

        k = k % count;

        if(k == 0) return head;

        temp->next = head;

        ListNode* newLast = head;

        for(int i = 1; i < count -k ;i++){
            newLast = newLast->next;
        }

        ListNode* newHead = newLast->next;
        newLast->next = nullptr;

        return newHead;



        
    }
};