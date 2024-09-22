/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL){return false;}
        vector<ListNode*>check;
        check.push_back(head);
        head=head->next;
        while(head->next){
            for(int i=0;i<check.size();i++){
                if(check[i]==head){return true;}
            }
            check.push_back(head);
            head=head->next;
        }
        return false;
    }
};