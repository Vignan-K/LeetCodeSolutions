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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=new ListNode();
        temp=head;
        while (temp!=nullptr){
            temp=temp->next;
            l++;
        }
        if (l==n){return head->next;}
        l=l-(n);
        ListNode* prev=new ListNode();
        temp=head;
        for (int i=0;i<l;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next=nullptr;
        return head;
    }
};
