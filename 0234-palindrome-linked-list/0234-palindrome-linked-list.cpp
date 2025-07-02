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
    bool isPalindrome(ListNode* head) {
        ListNode* node= head;
        ListNode* LastPartOfList;
        ListNode* FirstPartOfList;
        int len=0;

        while(node!=nullptr){
            len++;
            node=node->next;
        }
        if(len==1) return true;
        else if(len%2==1) {
            node=head;
            int ll=0;
            while(node!=nullptr){
                if(ll==(len/2-1)){
                    LastPartOfList=node->next->next;
                    node->next=nullptr;
                    break;
                }
            ll++;
            node=node->next;
            }
            FirstPartOfList=head;

            ListNode* prev= nullptr;
            ListNode* forward;
            node=LastPartOfList;
            while(node!=nullptr){
                forward=node->next;
                node->next=prev;
                prev=node;
                node=forward;
            }
            LastPartOfList=prev;
            
            while(FirstPartOfList!=nullptr){
                if(FirstPartOfList->val!=LastPartOfList->val)return false;
                FirstPartOfList=FirstPartOfList->next;
                LastPartOfList=LastPartOfList->next;
            }
            return true;
        }
        else{
            node=head;
            int ll=0;
            while(node!=nullptr){
                if(ll==(len/2-1)){
                    LastPartOfList=node->next;
                    node->next=nullptr;
                    break;
                }
            ll++;
            node=node->next;
            }
            FirstPartOfList=head;

            ListNode* prev= nullptr;
            ListNode* forward;
            node=LastPartOfList;
            while(node!=nullptr){
                forward=node->next;
                node->next=prev;
                prev=node;
                node=forward;
            }
            LastPartOfList=prev;
            
            while(FirstPartOfList!=nullptr){
                if(FirstPartOfList->val!=LastPartOfList->val)return false;
                FirstPartOfList=FirstPartOfList->next;
                LastPartOfList=LastPartOfList->next;
            }
            return true;
        }
    }
};