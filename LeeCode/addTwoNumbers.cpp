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
        ListNode *result = new ListNode() ;
        int sum = 0, carry = 0;
        while(l1 != nullptr && l2 != nullptr) {
            sum = l1->val + l2->val + carry ;
            carry = sum/10;
            sum = sum%10;
            
            ListNode* newNode = new ListNode(sum);
            if(result != nullptr) {
                ListNode* temp = result;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            else
            {
                result = new ListNode(sum);
            }
            l1 = l1->next;
            l2 = l2->next;
            
        }
        if(l1 != nullptr){
            while(l1 != nullptr) {
                sum = l1->val + carry ;
                carry = sum/10;
                sum = sum%10;

                ListNode* newNode = new ListNode(sum);
                if(result != nullptr) {
                    ListNode* temp = result;
                    while(temp->next != nullptr){
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                else
                {
                    result = new ListNode(sum);
                }
                l1 = l1->next;
            }
        }
        if(l2 != nullptr){
            while(l2 != nullptr) {
                sum = l2->val + carry ;
                carry = sum/10;
                sum = sum%10;

                ListNode* newNode = new ListNode(sum);
                if(result != nullptr) {
                    ListNode* temp = result;
                    while(temp->next != nullptr){
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                else
                {
                    result = new ListNode(sum);
                }
                l2 = l2->next;
            }
        }
        if(carry != 0){
            ListNode* newNode = new ListNode(carry);
            if(result != nullptr) {
                ListNode* temp = result;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            else
            {
                result = new ListNode(carry);
            }
        }
        return result->next;
    }
};