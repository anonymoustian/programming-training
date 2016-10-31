class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            mapping[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            const int gap = target - nums[i];
            if (mapping.find(gap) != mapping.end() && mapping[gap] > i) {
                result.push_back(i);
                result.push_back(mapping[gap]);
                break;
            }
        }
        return result;
    }
};

/**
unordered_map ���map������ģ�ʹ���Զ������Ͳ���Ҫ���� operator < , ��Ҫ����hash_value��������operator == map��Ԫ�ذ��պ�����洢�������key�Ĵ�С��������洢(�������)
**/