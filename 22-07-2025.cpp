class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0, right = 0, n = nums.size();
        int ans = INT_MIN;
        unordered_map<int, int> mp;
        int windowsSum = 0;

        while (right < n and left <= right) {
            if (mp.count(nums[right])) {
                mp[nums[left]]--;
                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]);
                }
                windowsSum -= nums[left];
                left++;
            } else {
                mp[nums[right]]++;
                windowsSum += nums[right];
                ans = max(ans, windowsSum);
                right++;
            }
        }

        return ans;
    }
};
