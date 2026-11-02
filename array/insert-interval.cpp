class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size() - 1, hook = -1;
        for (int i = n; i >= 0; i--) {
            if (newInterval[1] < intervals[i][0]) {
                continue;
            }
            else if (newInterval[0] > intervals[i][1]) {
                intervals.insert(intervals.begin() + i + 1, newInterval);
                return intervals;}
            else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
                intervals.erase(intervals.begin() + i);
            }
        }
        intervals.insert(intervals.begin(), newInterval);
        return intervals;
    }
};