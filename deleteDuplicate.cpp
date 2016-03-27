/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head) {
        // write your code here
        if(head == NULL)
            return NULL;
        ListNode *prev = head;
        while(prev != NULL){
            if(prev->next && (prev->val == prev->next->val)){
                ListNode* tmp = prev->next;
                prev->next = tmp->next;
                delete tmp;
                continue;
            }else{
                ListNode* curr = prev->next;
                while(curr != NULL){
                    if(prev->val == curr->val){
                        ListNode* tp = curr;
                        curr->next = tp->next;
                        delete tp;
                    }else{
                        curr = curr->next;
                    }
                }
            }
            prev = prev->next;
        }
        return head;
        
    }
};
