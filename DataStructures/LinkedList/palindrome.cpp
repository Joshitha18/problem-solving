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
 
//Given a singly linked list, determine if it is a palindrome.

class Solution {
public:
    //Function to Display middle element
int Mid(ListNode *head)
{
  ListNode *slow=head;
  ListNode *fast=head;
    int pos=0;
   while(fast!=NULL && fast->next!=NULL)
   {
       pos+=1;
    slow=slow->next;
    fast=fast->next->next;
   }
return pos;
}
    
    //Function to reverse between 2 positions
ListNode *reverse(ListNode* head, int k) {
 int arr[k],l;
    ListNode *temp=head;
    l=0;
    while(temp!=NULL){
        arr[l]=temp->val;
        l++;
        temp=temp->next;
        if(l==k) break;
    }
    
    temp=head;
    l=k-1;
    while(temp!=NULL){
        temp->val=arr[l];
        l--;
        temp=temp->next;
        if(l==-1) break;
    }  
    return head;

}
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)return true;
        int middle=Mid(head);
        head=reverse(head,middle);
  ListNode *temp=head;
  ListNode *slow=head;
  ListNode *fast=head;
        
   while(fast!=NULL && fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
   }
        if(fast==NULL){
          //even
            while(slow!=NULL){
                if(temp->val!=slow->val) return false;
                temp=temp->next;slow=slow->next;
            }
            
        }
        
        else if(fast->next==NULL){
           slow=slow->next;
            //odd
            while(slow!=NULL){
                if(temp->val!=slow->val) return false;
                temp=temp->next;slow=slow->next;
            }            
            
        }
     return true;   
        
    }
};
