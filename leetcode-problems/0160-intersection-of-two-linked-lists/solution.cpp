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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr=new ListNode();
        while (headA!=nullptr){
            curr=headB;
            while (curr!=nullptr){
                if (curr==headA){
                    return headA;
                }
                curr=curr->next;
            }
            headA=headA->next;
        }
        return nullptr;
    }
};
