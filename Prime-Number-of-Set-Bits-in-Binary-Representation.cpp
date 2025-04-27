class Solution {
public:
    int count_set_bits(int n) {
        int count = 0;
        while (n != 0) {
            n &= (n - 1);
            count++;
        }

        return count;
    }

    bool is_prime(int n) {
        if (n <= 1) return false;

        int count = 0;
        for (std::size_t i = 2; i * i <= n; i++) {
            if (n % i == 0) count++;
        }
        
        if (count > 0) return false;
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int result = 0;

        for (std::size_t i = left; i <= right; i++) {
            int count = count_set_bits(i);
            if (is_prime(count)) result++;
        }

        return result;
    }
};