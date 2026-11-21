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
    void reorderList(ListNode* head) {
        vector<int> x;
        ListNode* temp = head;
        while(temp != nullptr){
            x.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> y(x.size());
        for(int i=0;i<x.size();i++){
            if(i%2==0)y[i] = x[i/2];
            else y[i] = x[x.size()-1-(i/2)];
        }
        head->val = y[0];
        temp = head;
        head->next = nullptr;
        for(int i=1;i<y.size();i++){
            temp->next = new ListNode(y[i]);
            temp = temp->next;
        }
    }
};