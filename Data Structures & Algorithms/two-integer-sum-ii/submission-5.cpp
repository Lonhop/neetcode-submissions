class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int LeftPoint = 0;
        int RightPoint = numbers.size() - 1;
        while (LeftPoint < RightPoint) {
            if (numbers[LeftPoint] + numbers[RightPoint] == target) return {LeftPoint + 1, RightPoint + 1};
            else if (numbers[LeftPoint] + numbers[RightPoint] > target) --RightPoint;
            else ++LeftPoint;
        }
        return {};
    }
};