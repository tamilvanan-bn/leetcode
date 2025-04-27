class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        std::unordered_set<int> unique(nums.begin(), nums.end());
        int result{0}, unique_count = unique.size();

        for (std::size_t i = 0; i < nums.size(); i++) {
            std::unordered_set<int> temp_set;
            for (std::size_t j = i; j < nums.size(); j++) {
                temp_set.insert(nums[j]);
                if (temp_set.size() == unique_count) result++;
            }
        }

        return result;
    }
};