class Solution {
public:

    std::string count(const std::string& s) {
        int n = s.size();
        std::string ans = "";

        for (int i = 0; i < n; ) {
            char current_char = s[i];
            int count = 1;

            while (i + count < n && s[i + count] == current_char) count++;
            ans += std::to_string(count) + current_char;
            i += count;
        }

        return ans;
    }

    string countAndSay(int n) {
        std::string res = "1";
        if (n == 1) return res;

        for (int i = 2; i <= n; i++) {
            res = count(res);
        }

        return res;
    }
};

class Solution2 {
public:

    string countAndSay(int n) {
        std::string res = "1";
        if (n == 1) return res;

        for (int i = 1; i < n; i++) {
            std::string current = "";
            int count = 1;

            for (int j = 1; j < res.size(); j++) {
                if (res[j] == res[j - 1]) count++;
                else {
                    current += std::to_string(count) + res[j - 1];
                    count = 1;
                }
            }

            current += std::to_string(count) + res.back();
            res = current;
        }

        return res;
    }
};
