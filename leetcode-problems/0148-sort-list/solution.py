# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr=head
        v=[]
        while curr:
            v.append(curr.val)
            curr=curr.next
        v.sort()
        curr=head
        for i in range(len(v)):
            curr.val=v[i]
            curr=curr.next
        return head

