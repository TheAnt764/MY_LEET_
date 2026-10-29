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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        for(ListNode* n : lists){
            ListNode* temp = n;
            while(temp!=nullptr){
                vec.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(vec.size()==0){
            ListNode* head = nullptr;
            return head;
        }
        sort(vec.begin(),vec.end());
        ListNode* head = new ListNode(vec[0]);
        ListNode* temp = head;
        for(int i=1;i<vec.size();i++){
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        return head;
    }
};