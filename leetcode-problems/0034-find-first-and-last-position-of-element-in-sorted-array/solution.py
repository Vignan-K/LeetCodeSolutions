class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        #if target not in nums and len(nums)==0: return [-1,-1]
        ans=[]
        for i in range(len(nums)):
            if nums[i]==target:
                ans.append(i)
        if len(ans)!=0:
            return [ans[0],ans[-1]]
        else:
            return [-1,-1]
