class Solution:
    def pivotArray(self, nums: List[int], p: int) -> List[int]:
        l1=[]
        l=[]
        l2=[]
        for i in nums:
            if i<p: l1.append(i)
            elif i==p: l.append(i)
            else: l2.append(i)
        return l1+l+l2

