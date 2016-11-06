class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, h = numbers.size() - 1;
        while (numbers[l] + numbers[h] != target) {
            if (numbers[l] + numbers[h] < target) l++;
            else h--;
        }
        return vector<int>({l + 1, h + 1});
    }
};

/**
vector初始化方法:
vector<int> a;
vector<int> a(10);
vector<int> a(10, -1);
int a[6] = {1, 2, 3, 4, 5, 6}; vector<int> b(a, a + 4);
vector<int> a({-1, 1});
**/