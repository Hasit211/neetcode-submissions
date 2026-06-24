class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        set<int> data(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        auto prev = data.begin();
        auto it = next(data.begin());

        while(it != data.end()) {

            if(*it == *prev + 1) {
                current++;
            } else {
                current = 1;
            }

            longest = max(longest, current);

            prev = it;
            ++it;
        }

        return longest;
    }
};