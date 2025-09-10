class Solution:
    def removeDuplicates(self, nums: List[int]):
        ans=[]
        [ans.append(i) for i in nums if i not in ans]
        for _ in range((p:=len(nums))-(k:=len(ans))):
            ans.append("_")
        for i in range(p):
            nums[i]=ans[i]
        return k
