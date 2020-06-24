//Sort a linked list of 0s, 1s and 2s by changing links

Node* sortList(Node* head) 
{ 
    if (!head || !(head->next)) 
        return head; 
   
    Node* head0 = new Node(0), *head1 = new Node(0), *head2 = new Node(0); 
  	Node *temp0=head0, *temp1=head1, *temp2=head2;
    // Traverse list 
    Node* temp = head; 
    while (temp!=NULL) { 
    
        if (temp->data == 0) { 
        	temp0->next=temp; 
            temp0 = temp0->next; 
            temp = temp->next; 
        } else if (temp->data == 1) { 
            temp1->next = temp; 
            temp1 = temp1->next; 
            temp = temp->next; 
        } else { 
            temp2->next = temp; 
            temp2 = temp2->next; 
            temp = temp->next; 
        } 
    } 
    
  temp2->next=NULL;
  temp1->next=head2->next;
  temp0->next=head1->next;
  
  head=head0->next;
  
    return head; 
} 
