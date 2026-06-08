class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans=''
        for i in s:
            if i.isalnum():
                ans+=i
        ans=ans.lower()
        print(ans)
        print(ans[::-1])
        if ans == ans[::-1]:
            return 1==1
        else :
            return 1==0
