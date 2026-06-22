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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==nullptr){return nullptr;}
        int l=0;
        ListNode* curr=new ListNode();
        curr=head;
        while (curr->next!=nullptr){
            curr=curr->next;
            l++;
        }
        k=k%(l+1);
        if (k==0){return head;}
        curr->next=head;
        for (int i=0;i<k;i++){
            for (int j=0;j<l;j++){
                head=head->next;
            }
        }
        curr=head;
        for (int i=0;i<l;i++){
            curr=curr->next;
        }
        curr->next=nullptr;
        return head;
    }
};
