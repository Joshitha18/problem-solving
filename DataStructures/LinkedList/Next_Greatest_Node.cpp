//Next Greater Node In Linked List

class Solution {
public:
    int get_largest(ListNode *head,int a){
    ListNode *temp=head;
        while(temp!=NULL){
            if(temp->val>a) return temp->val;
            else temp=temp->next;
        }
        return 0;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *temp=head;
        vector<int> a;
        
        if(head==NULL) return a;
        if(head->next==NULL){a.push_back(0);return a;}
               
    int next_largest = 0;
        
    while (head->next!=NULL) {
      next_largest = get_largest(head->next,head->val);
      a.push_back(next_largest);
      head = head->next;
    }
        a.push_back(0);
    return a;
        
    }
};
