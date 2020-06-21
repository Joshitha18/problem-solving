class Solution {
public:
    ListNode* insert(ListNode *head,int d)
{
  ListNode *ptr = new ListNode();
  ptr->val=d;
  ptr->next=NULL;

  //If list is empty
  if(head==NULL)
  head=ptr;
  //else list is not empty
  else
  {
   ListNode *temp = head;
   while(temp->next != NULL)
   {
    temp=temp->next;
   }
   temp->next=ptr;

  }
return head;
}
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* temp1=l1;
      ListNode* temp2=l2;
      ListNode *head  = NULL;
      int coeff=0; 
        
        while(temp1 != NULL && temp2 != NULL){
            int sum;
            sum=temp1->val+temp2->val+coeff;
            coeff=sum/10;
            sum=sum%10;
            head=insert(head,sum);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
       if(temp1==NULL) {     
        while(temp2 != NULL){
            int sum;
            sum=temp2->val+coeff;
            coeff=sum/10;
            sum=sum%10;
            head=insert(head,sum);
            temp2=temp2->next;
         }
       }
     
       if(temp2==NULL) {
        while(temp1 != NULL){
            int sum;
            sum=temp1->val+coeff;
            coeff=sum/10;
            sum=sum%10;
            head=insert(head,sum);
            temp1=temp1->next;
         }
       }
           
       if(temp1==NULL && temp2==NULL && coeff!=0){
          insert(head,coeff); 
       }
        
       return head; 
    }
};
