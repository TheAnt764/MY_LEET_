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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        int sum = l1->val+l2->val;
        ListNode* head=new ListNode(sum%10);
        sum/=10;
        ListNode* temp = head;
        ListNode* x=l1->next;
        ListNode* y=l2->next;
        while(x!=nullptr||y!=nullptr){
            if (x!=nullptr){
                sum+=x->val;
                x=x->next;
            }
            if (y!=nullptr){
                sum+=y->val;
                y=y->next;
            }
            temp->next = new ListNode(sum%10);
            sum/=10;
            temp=temp->next;
        }
        while(sum!=0){
            temp->next = new ListNode(sum%10);
            sum/=10;
            temp=temp->next;
        }
        return head;
    }
};