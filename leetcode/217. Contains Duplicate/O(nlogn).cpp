//solution1:先排序,比较前后元素
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                return true;
            }
        }
        return false;
    }
};

//solution2:使用set(红黑树的平衡二叉检索树的数据结构),hash_set以哈希表作为底层数据结构
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (int i : nums) {
            if (s.find(i) != s.end()) {
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};