class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::vector<int> result;
        int c1{0}, c2{0}, count1{0}, count2{0}, n = nums.size(), threshold = floor(n / 3);

        for (std::size_t i = 0; i < n; i++) {
            if (nums[i] == c1) {
                count1++;
            } else if (nums[i] == c2) {
                count2++;
            } else if (count1 == 0) {
                c1 = nums[i];
                count1++;
            } else if (count2 == 0) {
                c2 = nums[i];
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        count1 = count2 = 0;
        for (int& i: nums) {
            if (c1 == i) count1++;
            else if (c2 == i) count2++;
        }

        if (count1 > threshold) result.push_back(c1);
        if (count2 > threshold) result.push_back(c2);

        return result;
    }
};