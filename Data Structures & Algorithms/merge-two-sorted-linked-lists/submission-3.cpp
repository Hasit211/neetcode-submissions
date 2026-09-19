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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode t(0);
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dum = &t;

        while(temp1!=NULL && temp2!= NULL){
            if(temp1->val < temp2->val){
                dum->next = temp1;
                temp1 = temp1->next;
            }else{
                dum->next = temp2;
                temp2 = temp2->next;
            }
            dum = dum->next;
        }
        if(temp1 != NULL){
            dum->next = temp1;
        }else if(temp2 != NULL){
            dum->next = temp2;
        }
        return t.next;
    }
};
