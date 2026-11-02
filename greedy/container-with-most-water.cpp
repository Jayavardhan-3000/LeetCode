class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0 , end = height.size()- 1;
        int currentarea = 0, maxarea = 0, lowheight;
        while (start < end) {
            int lowheight = min(height[start], height[end]);
            int currentarea = lowheight * (end - start);
            maxarea = max(currentarea, maxarea);

            // Move the pointer at the shorter line
            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        return maxarea;
    }
};