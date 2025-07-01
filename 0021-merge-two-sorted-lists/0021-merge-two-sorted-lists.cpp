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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode* node1=list1;
        ListNode* node2=list2;
        ListNode* temp;
        ListNode* new_head;

        if(node1==nullptr and node2 == nullptr) return nullptr;
        if(node2==nullptr) return node1; 
        else if(node1==nullptr) return node2;
        else{
             if (node1->val <= node2->val) {
                 new_head = node1;
                 node1 = node1->next;
             } else {
                 new_head = node2;
                 node2 = node2->next;
             }
             temp=new_head;

             while(node1!=nullptr){
                 
                 if(node2==nullptr || node1->val<=node2->val){
                     temp->next=node1; 
                     temp=node1;
                     node1=node1->next;
                 }
                 else{
                     temp->next=node2;
                     temp=node2;
                     node2=node2->next;
                 }
             }
             while(node2!=nullptr){
                   temp->next=node2;
                   temp=node2;
                   node2=node2->next;
             }

             return new_head;
         }
    }
    
};