//Sort a linked list in O(n log n) time using constant space complexity.

class Solution {
public:
        ListNode* merge(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->val <= list2->val){
            list1->next = merge(list1->next,list2);
            return list1;
        }
        else{
            list2->next = merge(list1,list2->next);
            return list2;
        }
 }
    
//MergeSort    
    ListNode* sortList(ListNode* head) {
 
        if(head==NULL || head->next == NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        fast=slow->next;
        slow->next=NULL;
        ListNode* l1=sortList(head);
        ListNode* l2=sortList(fast);
        return merge(l1,l2);       
        
    }
};
