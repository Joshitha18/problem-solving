class Solution {
public:
    Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->data <= list2->data){
            list1->next = mergeTwoLists(list1->next,list2);
            return l1;
        }
        else{
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};
