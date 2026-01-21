class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        temp=[]
        for _ in range(k): temp.append(0)
        for i in nums:
            if i==0:
                temp.append(i)
            else:
                if len(temp)>=k:
                    temp.clear()
                else:
                    return False
        return True
