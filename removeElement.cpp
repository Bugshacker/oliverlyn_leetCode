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
    ListNode* removeElements(ListNode* head, int val) {
         if(head == NULL)
            return head;
        ListNode* curr = head;
        while(curr != NULL){
            if(val == curr->val){
                ListNode* del = curr;
                curr = curr->next;
                delete del;
                continue;
            } else if(curr == NULL){
                return curr;
            }else{
                ListNode* ncurr = curr;
                while(ncurr->next != NULL){
                    if(val == ncurr->next->val){
                        ListNode* ndel = ncurr->next;
                        ncurr->next = ndel->next;
                        delete ndel;
                    }else{
                        ncurr = ncurr->next;
                    }
                }
            }
            break;
        }
         return curr;
    }
};
