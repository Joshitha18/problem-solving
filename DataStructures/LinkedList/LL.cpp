#include <iostream>
using namespace std;

//Creating Node Structure
struct Node{
 int data;
 Node *next;
};

//creating head pointer and equating to NULL
//Node *head=NULL;

//Function to insert at the beginning of linked list
void insertBegin (Node **head,int d)
{
 Node *ptr = new Node();
 ptr->data=d;
 ptr->next=*head;
 *head=ptr;
}

//Function to insert at the end of linked list
void insertEnd (Node **head,int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->next=NULL;

  //If list is empty
  if(*head==NULL)
  *head=ptr;
  //else list is not empty
  else
  {
   Node *temp = *head;
   while(temp->next != NULL)
   {
    temp=temp->next;
   }
   temp->next=ptr;

  }

}

//Function for sorted
void insertSort (Node **head,int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->next=NULL;
  int found=0;
  
  if(*head==NULL || (*head)->data>d)
   {
    found=1;
    insertBegin(head,d);
   }

  else
  {
   Node *temp = *head;
   while(temp->next != NULL)
   {
    if(d>temp->data && d<=temp->next->data){found=1;break;}
    else temp=temp->next;
   }
   if(found==1){
    ptr->next=temp->next;
    temp->next=ptr;
    }
   }
  
   if(found==0)
   {
    insertEnd(head,d);
   }
}

//Function to delete node at the beginning
void deleteBegin(Node **head){
//if list is empty.
if(*head==NULL)
 cout<<"LIST IS EMPTY\n";
else
{
 Node *ptr=*head;
 *head=(*head)->next;
 free(ptr);

}
}

//Function to delete node at the end
void deleteEnd(Node **head)
{
 Node *ptr;

 //if list is empty.
 if(*head==NULL)
  cout<<"EMPTY LIST\n";
 //if list has only one node.
 if((*head)->next==NULL)
 {
  ptr=*head;
  *head=NULL;
  free(ptr);
 }
 //Traversing the list.
 else
 {  
  Node *prev;
  ptr=*head;
  while(ptr->next!=NULL)
  {
   prev=ptr;
   ptr=ptr->next;
  }
  prev->next=NULL;
  free(ptr);
 }

}

//Function to delete node at given pos
void delete_pos(Node **head,int r)
{
 Node *ptr,*p;
 int count=1;
 //if list is empty.
 if(*head==NULL)
  cout<<"EMPTY LIST\n";
 //if list has only one node.
 if(r==1)
 {
  deleteBegin(head);
  cout<<"Deleted"<<endl;
 }
 //Traversing the list.
 else
 {  
   ptr=*head;
   while(ptr->next!=NULL)
   {
    count+=1;
    if(count==r) {break;}
    ptr=ptr->next;
   }
   if(count==r){
    p=ptr->next;
    ptr->next=ptr->next->next;
    free(p);
    cout<<"Deleted"<<endl;
    }
 }

}

//Function to search
bool search(Node **head,int d)
{
 Node *temp=*head;
 while(temp!=NULL)
 {
  if(temp->data==d) return true;
  else temp=temp->next;
 }
 return false;
}

//Function to reverse linked list
void Reverse(Node **head)
{
  Node *p,*c,*n;
  p=NULL;
  c=*head;
  while(c!=NULL)
   {
	n=c->next;
	c->next=p;
	p=c;
	c=n;
   }
  *head=p;
}

//Function to reverse between 2 positions
void reverseBetween(Node** head, int m, int k) {
 
if(*head!=NULL || (*head)->next!=NULL || m!=k)
 {
  int count=0;
  Node *temp=*head;
  Node *temp1=NULL;
 
  while(temp !=NULL)
  {
   count+=1;
   if(count==m) break;
   temp1=temp;
   temp=temp->next;
  }
 
  Node *p,*c,*n;
  p=NULL;
  c=temp;
  
  while(c!=NULL)
   {
	n=c->next;
	c->next=p;
	p=c;
	c=n;
	count+=1;
	if(count-1==k) break;
   }
        
    if((c==NULL && temp1 == NULL))
    {
     *head=p;
    }
    
    else if((c==NULL && temp1 != NULL))
    {
     temp1->next=p;
    }
    
    else if(temp1==NULL)
    {
     (*head)->next=c;
     *head=p;
    }
    
    else
    {    
     temp1->next->next=c;
     temp1->next=p;
    }
  }
}

//Function to delete first occurance of specific number
void delete_first_occur_num(Node **head,int d)
{
  if (!search(head,d))
    {
     cout<<"Not Present"<<endl;
    }
    
   else{  
     if((*head)->data==d)
      { 
        deleteBegin(head);
 	cout<<"Deleted "<<d<<endl;   	
      }
   	
      else{
       Node *ptr,*p;
 //Traversing the list.  
 	 ptr=*head;
 	 while(ptr->next!=NULL)
 	 {
 	  if(ptr->next->data==d) {break;}
  	  ptr=ptr->next;
  	 }
  	 p=ptr->next;
 	 ptr->next=ptr->next->next;
 	 free(p);
 	 cout<<"Deleted "<<d<<endl;   	
      } 
   }   
}

//Function to delete last occurance of specific number
void delete_last_occur_num(Node **head,int d)
{
  if (!search(head,d))
    {
     cout<<"Not Present"<<endl;
    }
    
   else{  
     Reverse(head);
     if((*head)->data==d)
      { 
        deleteBegin(head);
 	cout<<"Deleted "<<d<<endl;   	
      }
   	
      else{
       Node *ptr,*p;
 //Traversing the list.  
 	 ptr=*head;
 	 while(ptr->next!=NULL)
 	 {
 	  if(ptr->next->data==d) {break;}
  	  ptr=ptr->next;
  	 }
  	 p=ptr->next;
 	 ptr->next=ptr->next->next;
 	 free(p);
 	 cout<<"Deleted "<<d<<endl;   	
      }
      Reverse(head); 
   }   
}

//frequeny of a number
int freq(Node **head,int d) 
{ 
    Node* temp = *head; 
    int count = 0; 
    while (temp != NULL) { 
        if (temp->data == d) 
            count++; 
        temp = temp->next; 
    } 
    return count; 
} 

//Function to delete rth occurance of specific number
void delete_rth_occur_num(Node **head,int d, int r)
{
  int count=0;
  if (freq(head,d)<r)
    {
     cout<<"Not Present"<<endl;
    }
    
   else{  
     if((*head)->data==d)
      { 
       count=1;
       if(r==1){
        deleteBegin(head);
 	cout<<"Deleted "<<d<<endl; 
 	}
      }

      if(count!=r){
       Node *ptr,*p;
 //Traversing the list.  
 	 ptr=*head;
 	 while(ptr->next!=NULL)
 	 {
 	  if(ptr->next->data==d) 
 	  {
 	   count+=1;
 	   if(count==r){break;}
 	  }
  	  ptr=ptr->next;
  	 }
  	 p=ptr->next;
 	 ptr->next=ptr->next->next;
 	 free(p);
 	 cout<<"Deleted "<<d<<endl;   	
      } 
   }   
}

//Function to display linked list
void display(Node **head)
{
 Node *temp=*head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 cout<<"\n";
}

//Function to Display middle element
void Mid(Node **head)
{
  Node *slow=*head;
  Node *fast=*head;

  if(*head==NULL)
   cout<<"List is Empty";
  else
  {
   while(fast!=NULL && fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
   }
   cout<<"Middle element:"<<slow->data<<endl;
  }

}

//Function to return pos of middle element
int Mid_index(Node **head)
{
  Node *fast=*head;
  int count=1;
  if(*head==NULL)
   cout<<"List is Empty";
  else
  {
   while(fast!=NULL && fast->next!=NULL)
   {
    fast=fast->next->next;
    count++;
   }
   return count;
  }
return 0;
}

//Function to insert at given pos
void insert_pos (Node **head,int d,int r)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->next=NULL;
  int pos=1;
  //If pos is 1
  if(r==1)
   {
    insertBegin(head,d);
   }

  else
  {
   Node *temp = *head;
   while(temp->next != NULL)
   {
    pos+=1;
    if(pos==r) break;
    else temp=temp->next;
   }
   if(pos==r){
    ptr->next=temp->next;
    temp->next=ptr;
    }
   }
  
   if(pos==(r-1))
   {
    insertEnd(head,d);
   }
}

//Pairwise swap by changing data
void pair_wise_swap_data(Node** head) 
{ 
    Node* temp = *head; 
  
    /* Traverse further only if  
    there are at-least two nodes left */
    while (temp != NULL && temp->next != NULL) { 
        /* Swap data of node with  
           its next node's data */
        swap(temp->data,temp->next->data);   
        /* Move temp by 2 for the next pair */
        temp = temp->next->next; 
    }
   display(head); 
} 

//Pairwise swap by changing links
void pair_wise_swap_link(Node **head)
{ 
 if(head!=NULL){
 	
	 if((*head)->next != NULL){
	 Node *temp=*head;
	 Node *ptr=temp->next;
	 *head=ptr;
 	Node *temp1=NULL;
 
	 while(temp->next->next !=NULL)
	 {
		  if(temp1 != NULL){
 			 temp1->next=ptr;
 		 }
 		 
 		 temp->next=ptr->next;
 		 ptr->next=temp;

 		 temp1=temp;
 		 temp=temp->next;
  
 		 if(temp->next != NULL){
 			 ptr=temp->next;
 		 }
 
 		 else break;
	 }
 
  	if(temp->next != NULL){
  		if(temp1 != NULL){
  		 temp1->next=ptr;
  		 }
  		 ptr->next=temp;
  		 temp->next=NULL;
  	 }
 	}
 }
 display(head);
}

//check loop
bool hasLoop (Node **head)
{
  Node *slow, *fast;
  slow=*head;
  fast=*head;
   while (fast!=NULL && fast->next!=NULL )
   {
    fast= fast->next->next;
    slow = slow->next;
     if (slow ==  fast)
     {
      return true;   //loop found
     }
  }
return false;
} 

//delete middle element
void deleteMiddle(Node **head){
int r=Mid_index(head);
delete_pos(head,r);
}



int main()
{
/*
  Node *head  = NULL;
  Node *head1 = NULL;
  
  //Delete first occurance of 1
        delete_first_occur_num(&head,1);
  //Display
	display(&head);
  //insert 5 
        insertEnd(&head,5);
  //Display
	display(&head);
  //insert 2 at end
        insertEnd(&head,2);
  //Display
	display(&head);
  //insert 10 at begining
  	insert_pos(&head,10,3);
  //Display
	display(&head);
  //insert 20 at end
        insert_pos(&head,1,5);
  //Display
	display(&head);
  //insert 5 at begining
  	insertBegin(&head,8);
  //Display
	display(&head);
	
	pair_wise_swap_data(&head);
	
  //insert 5 at begining
  	insertBegin(&head,9);
  //Display
	display(&head);
	
	pair_wise_swap_link(&head);
	
  //frequency of 5
  	cout<<freq(&head,5)<<endl;
  //Delete rth occurance of 5
        delete_rth_occur_num(&head,5,4);
  //Display
	display(&head);
  //Delete first occurance of 20
        delete_first_occur_num(&head,20);
  //Display
	display(&head);
  //Delete last occurance of 5
        delete_last_occur_num(&head,5);
  //Display
	display(&head);
  //Delete num at pos 2
        delete_pos(&head,2);
  //Display
	display(&head);
  //Reverse
  	Reverse(&head);
  //Display
	display(&head);  	
  //display middle element
  	Mid(&head);
  	
  	deleteMiddle(&head);
  	display(&head);
  	
  //Delete beigin
  	deleteBegin(&head);
  //Delete End
	deleteEnd(&head);
  //insert 9 at end
        insertEnd(&head,9);
  //Display
  	display(&head);
  //Search for 1
  	cout<<search(&head,9)<<endl;
  //Search for 2
  	cout<<search(&head,2)<<endl;
  //loop
        cout<<hasLoop(&head)<<endl;
        	 
  	cout<<"\n";
  //insert 5 
        insertSort(&head1,5);
        	display(&head1);
  //insert 2 at end
        insertSort(&head1,2);
        	display(&head1);
  //insert 10 at begining
  	insertSort(&head1,10);
  		display(&head1);
  //insert 20 at end
        insertSort(&head1,1);
        	display(&head1);
  //insert 5 at begining
  	insertSort(&head1,5);
  		display(&head1);
  //insert 5 at begining
  	insertSort(&head1,5);
  //Display
	display(&head1);
  //frequency of 5
  	cout<<freq(&head1,5)<<endl;
  //Delete rth occurance of 5
        delete_rth_occur_num(&head1,5,1);
  //Display
	display(&head1); 
*/
 return 0;
}

