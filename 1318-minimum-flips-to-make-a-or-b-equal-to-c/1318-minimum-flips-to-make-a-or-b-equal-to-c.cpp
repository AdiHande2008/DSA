class Solution {
public:
    int minFlips(int a, int b, int c) {
        int result = 0;

        while (a != 0 || b != 0 || c != 0) {
            if ((c & 1) == 1) {
                if ((a & 1) == 0 && (b & 1) == 0) {
                    result++;
                }
            } else {
                if ((a & 1) == 1) {
                    result++;
                }

                if ((b & 1) == 1) {
                    result++;
                }
            }

            a >>= 1;
            b >>= 1;
            c >>= 1;
        }

        return result;
    }
};