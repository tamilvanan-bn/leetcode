class Solution {
public:
    int myAtoi(string s) {
        if (s.empty()) return 0;
        int i = 0, n = s.size(), base = 0, sign = 1;

        while (i < n && s[i] == ' ') i++;

        if (i == n) return 0;

        if (s[i] == '+' || s[i] == '-') sign = s[i++] == '-' ? -1 : 1;

        while (i < n && (s[i] >= '0' && s[i] <= '9')) {
            int digit = s[i] - '0';

            if (base > INT_MAX / 10 || (base == INT_MAX / 10 && digit > 7)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            base = base * 10 + digit;
            i++;
        }

        return base * sign;
    }
};