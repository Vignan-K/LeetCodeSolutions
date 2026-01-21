class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        temp=[]
        for i in nums:
            if i not in temp:
                temp.append(i)
                continue
            return i
