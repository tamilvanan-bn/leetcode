class Solution {
public:
    char kthCharacter(int k) {
        std::string acc = "a";

        while (acc.size() < k) {
            std::size_t n = acc.size();

            for (std::size_t i = 0; i < n && acc.size() < k; i++) {
                char next = acc[i] + 1;
                if (next > 122) {
                    next = 97;
                }
                acc += next;
                
                if (acc.size() == k) {
                    break;
                }
            }
        }

        return acc[k - 1];
    }
};