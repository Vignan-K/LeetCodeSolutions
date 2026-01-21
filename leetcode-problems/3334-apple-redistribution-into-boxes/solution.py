class Solution:
    def minimumBoxes(self, apple: List[int], cap: List[int]) -> int:
        ta=sum(apple)
        ans=0
        while ta>0:
            temp=max(cap)
            ta-=temp
            ans+=1
            cap.remove(temp)
        return ans
