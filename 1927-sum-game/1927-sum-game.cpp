class Solution {
public:
    bool sumGame(string num) {
       int n = num.size();

        int left = 0, right = 0;
        int qleft = 0, qright = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                qleft++;
            else
                left += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                qright++;
            else
                right += num[i] - '0';
        }

        int diff = left - right;
        int qdiff = qright - qleft;  // IMPORTANT: right - left

        if ((qleft + qright) % 2 == 1)
            return true;

        return diff != 9 * qdiff / 2;
    }
};