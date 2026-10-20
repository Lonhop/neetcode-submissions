class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int right = matrix.size() * matrix[0].size() - 1;
        int left = 0;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / matrix[0].size();
            int column = mid % matrix[0].size();
            if (matrix[row][column] > target) {
                right = mid - 1;
            }
            else if (matrix[row][column] < target) {
                left = mid + 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};