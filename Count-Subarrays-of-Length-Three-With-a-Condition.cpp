class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size(), count{0};

        for (std::size_t i = 1; i < n - 1; i++) {
            float border = (float) (nums[i - 1] + nums[i + 1]);
            float middle = (float) (nums[i] / 2.0);
            count = middle == border ? ++count : count;
        }

        return count;
    }
};