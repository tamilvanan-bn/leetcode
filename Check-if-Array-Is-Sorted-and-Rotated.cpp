class Solution {
public:
    bool is_increasing(std::vector<int>& nums, int start, int end) {
        for (int i = start; i < end - 1; i++) {
            if (i + 1 < end && nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool check(vector<int>& nums) {
        if (nums.size() < 2) {
            return true;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                const bool c1 = is_increasing(nums, i + 1, nums.size());
                const bool c2 = is_increasing(nums, 0, i + 1);
                
                if (c1 && c2 && nums[nums.size() - 1] <= nums[0]) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};