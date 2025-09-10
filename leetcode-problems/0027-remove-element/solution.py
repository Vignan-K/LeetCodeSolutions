class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        ans=[]
        [ans.append(i) for i in nums if i!=val]
        l=(a:=len(nums))-(b:=len(ans))
        [ans.append("_") for _ in range(l)]
        for i in range(a): nums[i]=ans[i]
        return b
