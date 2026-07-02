class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Store (frequency, number)
        vector<pair<int, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.second, it.first});
        }

        // Step 3: Sort by frequency (largest first)
        sort(arr.rbegin(), arr.rend());

        // Step 4: Take first k numbers
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};