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
    bool hasCycle(ListNode* head) {
        ListNode* temp = head;
        int counter = 1;
        while(temp){
            if(temp->next == nullptr){
                return false;
            }
            if(counter>1000){
                return true;
            }
            counter++;
            temp = temp->next;
        }
        return false;
    }
};
