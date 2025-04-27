class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int, std::size_t> mp;

        for (std::size_t i = 0; i < n; i++) {
            if (mp.count(nums[i])) {
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }

        return false;
    }
};