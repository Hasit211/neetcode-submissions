class Solution {
private:
    int count(ListNode* l){
        ListNode* t = l;
        int ans = 0;
        while(t){
            ans++;
            t = t->next;
        }
        return ans;
    }

    ListNode* add(ListNode* l1, ListNode* l2){
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp2){
            temp1->val = temp1->val + temp2->val;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return l1;
    }

    ListNode* fixCarry(ListNode* l1){
        ListNode* temp = l1;
        int carry = 0;
        ListNode* prev = NULL;

        while(temp){
            int total = temp->val + carry;
            temp->val = total % 10;
            carry = total / 10;
            prev = temp;
            temp = temp->next;
        }
        
        if(carry > 0){
            prev->next = new ListNode(carry);
        }
        return l1;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = count(l1);
        int b = count(l2);
        

        if(a >= b){
            l1 = add(l1, l2);
            return fixCarry(l1);
        } else {
            l2 = add(l2, l1);
            return fixCarry(l2);
        }
    }
};