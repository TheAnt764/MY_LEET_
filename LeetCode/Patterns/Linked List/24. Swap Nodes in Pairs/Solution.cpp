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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)return nullptr;
        
        vector<int> vec;
        ListNode* temp = head;

        while(temp!= nullptr){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        for(int i=0;i<vec.size();i+=2){
            if(i+1==vec.size())continue;

            vec[i] = vec[i]^vec[i+1];
            vec[i+1] = vec[i]^vec[i+1];
            vec[i] = vec[i]^vec[i+1];
        }
        ListNode* head2 = new ListNode(vec[0]);
        temp = head2;
        for(int i=1;i<vec.size();i++){
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        return head2;
    }
};