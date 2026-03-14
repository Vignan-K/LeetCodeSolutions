# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        l=0
        curr=head
        while curr:
            l+=1
            curr=curr.next
        v=l//2
        prev=None
        tail=head
        for _ in range(v-1): tail=tail.next
        curr=tail
        tail=tail.next
        curr.next=None
        curr=tail
        while curr:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        tail=prev
        ans=ListNode(0)
        curr=ans
        while tail:
            if head:
                curr.next=head
                head=head.next
                curr=curr.next
            curr.next=tail
            tail=tail.next
            curr=curr.next
        return ans.next
