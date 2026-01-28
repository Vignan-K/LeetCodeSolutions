class Solution {
    public void reverseString(char[] s) {
        int l=s.length;
        int fst=0,lst=(l-1);
        char temp;
        while (fst<lst){
            temp=s[fst];
            s[fst]=s[lst];
            s[lst]=temp;
            fst++;
            lst--;
        }
    }
}
