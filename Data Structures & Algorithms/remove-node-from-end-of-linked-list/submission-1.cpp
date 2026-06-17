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
        int count =0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        int idx = count - n;
        if(idx ==0&&count!=1){
            return head->next;
        }
        if(count==1&&idx==0){
            return nullptr;
        }
        int counter = 0;
        ListNode* mover = head;
        while(counter != idx-1){
            mover = mover->next;
            counter++;
        }
        mover->next = mover->next->next;
        


        
        return head;
    }
};
