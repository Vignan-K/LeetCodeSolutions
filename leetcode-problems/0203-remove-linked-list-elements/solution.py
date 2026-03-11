# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], v: int) -> Optional[ListNode]:
        if head is None : return head
        ans=ListNode(0)
        temp=ans
        while head:
            if head.val!=v:
                temp.next=head
                temp=temp.next
            head = head.next
        temp.next=None
        return ans.next
