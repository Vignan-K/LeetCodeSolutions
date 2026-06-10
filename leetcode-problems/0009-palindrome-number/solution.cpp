class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){return 1==0;}
        long long rev=0,n=x;
        while(n>0){
            int temp=n%10;
            rev=rev*10+temp;
            n/=10;
        }
        if (rev==x){
            return 1==1;
        }else{
            return 1==0;
        }
    }
};
