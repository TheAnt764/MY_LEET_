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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)return head;
        vector<int> a;
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val == val){
                temp= temp->next;
                continue;
            }
            a.push_back(temp->val);
            temp = temp->next;
        }
        if(a.size()==0)return nullptr;
        ListNode* h = new ListNode(a[0]);
        temp = h;
        for(int i=1;i<a.size();i++){
            temp->next = new ListNode(a[i]);
            temp = temp->next;
        }
        return h;
    }
};