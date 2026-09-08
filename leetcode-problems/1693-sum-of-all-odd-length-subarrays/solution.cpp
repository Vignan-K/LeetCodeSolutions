class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> vtr(arr.size());
        int tot=0;
        for (int i=0;i<arr.size();i++){
            tot+=arr[i];
            vtr[i]=tot;
        }
        long long ans=0;
        for (int n=0;n<arr.size();n+=2){
            int left=0;
            for (int right=n;right<arr.size();right++,left++){
                ans+=vtr[right]-vtr[left]+arr[left];
                cout<<ans<<":"<<n<<".";
            }
        }
        return ans;
    }
};
