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
    int pairSum(ListNode* head) {
        int l=1;
        ListNode* tail=new ListNode();
        tail=head;
        while(tail->next!=nullptr){
            l++;
            tail=tail->next;
        }
        //cout<<l<<'\n';
        ListNode* prev=new ListNode();
        tail=head;
        for (int i=0;i<(l/2);i++){
            prev= tail;
            tail=tail->next;
        }
        //cout<<tail->val<<prev->val<<'\n';
        prev->next=nullptr;
        prev=nullptr;
        //cout<<head->next->val<<'\n';
        ListNode* temp=new ListNode();
        temp=tail->next;
        tail->next=nullptr;
        while (temp!=nullptr){
            prev=tail;
            tail=temp;
            temp=temp->next;
            tail->next=prev;
        }
        int max=0;
        //cout<<head->val<<tail->val<<'\n';
        //cout<<l;
        while(head!=nullptr){
            if ((head->val+tail->val)>max){
                max=head->val+tail->val;
            }
            head=head->next;
            tail=tail->next;
        }
        return max;
    }
};
