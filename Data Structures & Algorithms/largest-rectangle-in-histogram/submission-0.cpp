class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> Stack;
        int MaxArea = 0;
        for (int i = 0; i < heights.size(); i++) {
            int start = i;
            while (!Stack.empty() && Stack.top().second > heights[i]) {
                int idx = Stack.top().first;
                int height = Stack.top().second;
                MaxArea = max(MaxArea, height * (i - idx));
                Stack.pop();
                start = idx;
            }
            Stack.push({start,heights[i]});
        }
        int HeightSize = heights.size();
        while (!Stack.empty()) {
            int idx = Stack.top().first;
            int height = Stack.top().second;
            MaxArea = max(MaxArea, height * (HeightSize - idx));
            Stack.pop();
        }
        return MaxArea;
    }
};