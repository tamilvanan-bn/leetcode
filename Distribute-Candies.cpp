class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        return std::min(std::unordered_set(candyType.begin(), candyType.end()).size(), candyType.size() / 2);
    }
};