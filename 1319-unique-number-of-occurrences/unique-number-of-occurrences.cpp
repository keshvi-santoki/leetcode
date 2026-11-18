class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq_map;
        for (int x : arr) {
            freq_map[x]++;
        }
        
        for (pair<int, int> p : freq_map) {
            int freq = p.second, count = 0;
            for (pair<int, int> p2 : freq_map) { // Fixed parenthesis here
                if (p2.second == freq) {
                    count++;
                }
            }
            if (count > 1) {
                return false; // Duplicate frequency found
            }
        }
        
        return true; // All frequencies are unique
    }
};
