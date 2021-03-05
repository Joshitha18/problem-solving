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
    void sign(ListNode *head)
    {
        ListNode *temp=head;
        while(temp)
        {
           temp->val *= -1;
            temp = temp->next;
        }
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        sign(headA);
        ListNode *tempB=headB;
        while(tempB){
            if (tempB->val < 0) break;
            tempB=tempB->next;
        }
        sign(headA);
        return tempB;
    }

};
