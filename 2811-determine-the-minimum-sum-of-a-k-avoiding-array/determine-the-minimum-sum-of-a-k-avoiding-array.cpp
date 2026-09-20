class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_map<int,int> x;
        int ans=0,i=1;
        while(n){
            if(x[k-i]==0){
                ans+=i;
                n--;
                x[i]=1;
            }
            i++;
        }
        return ans;
    }
};