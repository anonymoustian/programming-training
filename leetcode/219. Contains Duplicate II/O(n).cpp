class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (i > k) {
                s.erase(nums[i - k - 1]);
            }
            if (!s.insert(nums[i]).second) {
                return true;
            }
        }
        return false;
    }
};

//题大意: 给定一个array, 有相同的两个元素下标为i,j, i,j间隔不大于k, 则返回true,否则false