/*
Given a linked list where every node represents a linked list and contains two pointers of its type:
(i) Pointer to next node in the main list (we call it ‘right’ pointer in below code)
(ii) Pointer to a linked list where this node is head (we call it ‘down’ pointer in below code).
All linked lists are sorted. 
*/

Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        Node *resulted;
        if(list1->data <= list2->data){
            resulted=list1;
            resulted->down = mergeTwoLists(list1->down,list2);
        }
        else{
            resulted=list2;
            resulted->down = mergeTwoLists(list1,list2->down);
        }
        
     resulted->next = NULL; 
     return resulted;   
     
  }



Node* flat (Node* head) 
{ 
    // Base cases 
    if (head == NULL || head->next == NULL) 
        return head; 
  
    // Merge this list with the list on right side 
    return mergeTwoLists( head, flat(head->next) ); 
} 


void print(Node *head) 
{ 
    while (head != NULL) 
    { 
        cout<<head->data<<" ";
        head = head->down; 
    } 
    cout<<"\n";
} 
