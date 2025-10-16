class Solution:
    def searchInsert(self, li: List[int], n: int) -> int:
        for i in range(len(li)):
            if li[i]==n:
                return i
        for i in range(len(li)):
            if li[i]>n:
                return i
        return len(li)

