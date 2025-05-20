class Solution {
public:
    bool is_increasing(std::vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool check(vector<int>& nums) {
        if (nums.size() < 2) {
            return true;
        }
        std::vector<int> temp;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                for (int j = i + 1; j < nums.size(); j++) {
                    temp.push_back(nums[j]);
                }

                for (int j = 0; j <= i; j++) {
                    temp.push_back(nums[j]);
                }

                if (is_increasing(temp)) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};