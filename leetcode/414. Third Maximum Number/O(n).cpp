class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> max3; //C++ set 和 map 键值按升序排列
        for (auto n : nums) {
            max3.insert(n);
            if (max3.size() > 3) max3.erase(max3.begin());
        }
        return (max3.size() >= 3) ? *max3.begin() : *max3.rbegin(); //rbegin()反向迭代器
    }
};