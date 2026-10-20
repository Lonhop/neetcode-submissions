class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int current = nums[i];
            int left = i + 1;
            int right = len - 1;
            while (left < right) {
                int sum3 = current + nums[right] + nums[left];
                if (sum3 > 0) --right;
                else if (sum3 < 0) ++left;
                else {
                    res.push_back({current,nums[left],nums[right]});
                    ++left;
                    --right;
                    while (left < right && nums[left] == nums[left - 1]) ++left;
                }
            }
        }
        return res;
    }
};