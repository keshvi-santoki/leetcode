class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& tasks) {
        int n=tasks.size(),ans=0;
        sort(tasks.begin(),tasks.end());
        sort(pt.begin(),pt.end(),greater<int>());
        for(int i=3;i<n;i+=4){
            ans=max(ans,pt[i/4]+tasks[i]);
        }
        return ans;
    }
};