/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 //Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 
class Solution {
public:
    
  ListNode *hasCycle(ListNode *head) {
  ListNode *slow, *fast;
  slow=head;
  fast=head;
   while (fast!=NULL && fast->next!=NULL )
   {
    fast= fast->next->next;
    slow = slow->next;
     if (slow ==  fast)
     {
      return slow;
     }
  }
return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
      
        if (head==NULL || head->next==NULL) return NULL;
        
       ListNode *loopnode=NULL;
        loopnode=hasCycle(head);
        
        if (loopnode==NULL) return NULL;
        
        if(loopnode==head) return head;
        
        ListNode *ptr1,*ptr2;
        
        ptr2=loopnode;
        ptr1=head;
        
        while(1){
            if(ptr1->next==ptr2->next) break;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1->next;
        
    }
};


//Function to remove cycle

    ListNode *detectCycle(ListNode *head) {
      
        if (head!=NULL || head->next!=NULL) return head;
        
       ListNode *loopnode=NULL;
        loopnode=hasCycle(head);
        
        if (loopnode==NULL) return head;
        
        if(loopnode==head) {
              ListNode *temp=head;
              while(temp != NULL){
                if(temp->next==head) {temp->next==NULL;return head;}
                temp=temp->next;
                }
          }
        
        ListNode *ptr1,*ptr2;
        
        ptr2=loopnode;
        ptr1=head;
        
        while(1){
            if(ptr1->next==ptr2->next) 
            {
              ptr2->next==NULL;
              break;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return head;
        
    }
