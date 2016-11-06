class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        if (nums.size() < 3) return res;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() - 2) {
            if (nums[i] > 0) break;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) res.push_back({nums[i], nums[j], nums[k]});
                if (sum <= 0) while (nums[j] == nums[++j] && j < k); //important!
                if (sum >= 0) while (nums[k--] == nums[k] && j < k);
            }
            while (nums[i] == nums[++i] && i < nums.size() - 2);
        }
        return res;
    }
};