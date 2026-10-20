class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int res = min(height[left],height[right]) * (right - left);
            mx = max(mx,res);
            if (height[left] > height[right]) --right;
            else {
                ++left;
            }
        }
        return mx;
    }
};