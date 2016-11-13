class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        add(digits, 1);
        return digits;
    }
private:
    void add(vector<int> &digits, int value) {
        int c = value; //进位
        for (auto it = digits.rbegin(); it != digits.rend(); it++) {
            *it += c;
            c = *it / 10;
            *it %= 10;
        }
        if (c > 0) digits.insert(digits.begin(), 1);
    }
};

//insert(position, val) 在指定位置前插入val
//insert rbegin(), rend()