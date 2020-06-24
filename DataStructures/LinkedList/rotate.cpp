//Given a linked list, rotate the list to the right by k places, where k is non-negative.

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
    

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *temp=head;
        int n=1,pos=0;
        
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        
            if(k%n==0) 
            {
                return head;
            }
        
        temp->next=head;
        
        temp=head;
        cout<<k<<n;
        
        while(k>n){k=k-n;}
        
        while(1){
            pos++;
            if(k+pos==n) break;
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
          
     return head;   
        
    }
};
