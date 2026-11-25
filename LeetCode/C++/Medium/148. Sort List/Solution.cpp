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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr)return head;
        if(head->next == nullptr)return head;
        vector<int> a;
        ListNode* temp = head;
        while(temp != nullptr){
            a.push_back(temp->val);
            temp = temp->next;
        }
        sort(a.begin(), a.end());
        temp = head;
        temp->val = a[0];
        temp->next = nullptr;
        for(int i=1;i<a.size();i++){
            temp->next = new ListNode(a[i]);
            temp = temp->next;
        }
        return head;
    }
};