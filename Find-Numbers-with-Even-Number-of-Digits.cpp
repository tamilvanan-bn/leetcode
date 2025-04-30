class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for (const int& i : nums) {
            if ((i > 9 && i <= 99) 
                || (i > 999 && i <= 9999)
                || (i > 99999)
            ) count++;
        }

        return count;
    }
};