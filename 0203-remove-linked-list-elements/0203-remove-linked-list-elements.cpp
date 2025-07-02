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

       ListNode* dummy = new ListNode(0);
       ListNode* prev = dummy ;
       ListNode* node = head;
       prev->next =node;
       

       while(node!=nullptr){
        if(node->val==val){
            prev->next = node->next;
        }
        else{
           prev=node;
        }
        node=node->next;
        }

        if(head!=nullptr && head->val==val){
            head =nullptr;
        }
       return dummy->next;
    }
};