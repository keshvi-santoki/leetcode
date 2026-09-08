class Solution {
public:
    void reverse(vector<int>& arr, int index){
        int i = 0, j = index; 
        while(i<j){
            swap(arr[i],arr[j]);
            i++, j--;
        }
    }

    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        for (int mx = n; mx > 1; mx--) {
            int index = 0;
            while (arr[index] != mx) index++;

            if (index == mx - 1) continue;

            if (index != 0) {
                ans.push_back(index + 1);
                reverse(arr, index);
            }

            ans.push_back(mx);
            reverse(arr, mx - 1);
        }
        return ans;
    }
};