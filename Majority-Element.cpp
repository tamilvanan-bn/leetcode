class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate{0}, count{0};

        for (const int& i : nums) {
            if (count == 0) {
                candidate = i;
                count++;
            } else if (i == candidate) {
                count++;
            } else {
                count--;
            }
        }

        count = 0;
        for (const int& i : nums) {
            if (i == candidate) count++;
        }
        
        if (count > floor(nums.size() / 2)) return candidate;
        return candidate;
    }
};