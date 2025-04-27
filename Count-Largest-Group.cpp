class Solution {
public:

    int sum_of_digits(int n) {
        int sum{0};

        while (n != 0) {
            sum += n % 10;
            n /= 10;   
        }

        return sum;
    }

    int countLargestGroup(int n) {
        std::vector<int> group(37, 0);

        for (std::size_t i = 1; i <= n; i++) {
            int sum = sum_of_digits(i);
            while (sum > 36) {
                sum = sum_of_digits(sum);
            }
            std::cout << sum << ' ';
            group[sum - 1]++;
        }
        
        std::cout << std::endl;
        std::copy(std::begin(group), std::end(group), std::ostream_iterator<int>(std::cout, " "));
        int mx{0}, result{0};
        
        for (const int& i : group) {
            if (i > mx) {
                mx = i;
            }
        }

        for (const int& i : group) {
            if (i == mx) {
                result++;
            }
        }

        return result;
    }
};