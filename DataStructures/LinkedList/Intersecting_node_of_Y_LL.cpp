/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    long long int length(ListNode *head)
    {
        long long int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            count+=1;
            temp=
        }
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        long long int lengthA=length(headA);
        long long int lengthB=length(headB);
            ListNode *tempA=headA;
            ListNode *tempB=headB;
        
        if(min(lengthA,lengthB)==0) return NULL;
        
        int dif=abs(lengthA-lengthB);
        
        if(lengthA>lengthB && dif!=0){
            int count=0;
            while(count!=dif){count+=1;tempA=tempA->next;}
        }
        
        else if(lengthA<lengthB && dif!=0){
            int count=0;
            while(count!=dif){count+=1;tempB=tempB->next;}
        }        
        
        while(tempA!=NULL){
            if(tempA==tempB) return tempA;
            else {tempA=tempA->next;tempB=tempB->next;}
        }
       return NULL; 
    }
    
};
