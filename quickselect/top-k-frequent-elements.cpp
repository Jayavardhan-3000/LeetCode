class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
 vector<int> v;
        unordered_map<int, int> freq;
        for(auto it: nums) freq[it]++;
        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](auto a, auto b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++) v.push_back(vec[i].first);
        return v;
    }
};