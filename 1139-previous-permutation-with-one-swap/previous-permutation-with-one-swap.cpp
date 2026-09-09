class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        if(is_sorted(arr.begin(), arr.end())) return arr;
        
        int n = arr.size();
        
        int id = n-2;
        while(id >= 0 && arr[id] <= arr[id+1]) id--;
        
        int i = n-1;
        while(i > id && arr[i] >= arr[id]) i--;
        while(i > id && i && arr[i] == arr[i-1]) i--;
        swap(arr[i], arr[id]);
        return arr;
    }
};