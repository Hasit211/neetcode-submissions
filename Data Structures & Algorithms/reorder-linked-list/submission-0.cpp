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
private:
    ListNode* rev(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            ListNode* nxt = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }
        return prev;
    }
    void merger(ListNode* l1,ListNode* l2){
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp2){
            ListNode* nxt = temp2->next;
            ListNode* t = temp1->next;
            temp2->next = temp1->next;
            temp1->next = temp2;
            temp2 = nxt;
            temp1 = t;
        }
    }
public:
    void reorderList(ListNode* head) {
        int size =0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;

        }
        int r;
        if(size%2){
            r = size/2 +1;
        }else{
            r = size/2;
        }
        temp = head;
        int ctr =0;
        while(ctr != r-1){
            ctr++;
            temp = temp->next;
        }
        ListNode* s = temp->next;
        s = rev(s);
        temp->next = NULL;
        merger(head,s);
        return;

    }
};
