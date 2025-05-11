//https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1 = 0, p2 = 1;
        int n = nums.size();
        int multi = 1, k = 0, i = 0;
        vector<int> ans(n);

        while (p1 < n) {
            if (p1 == p2) {
                p2++;
                if (p2 == n) {
                    break;
                }
            }
            multi = nums[p2] * multi;
            k++;
            p2++;
            if (k == n - 1) {
                p2 = 0;
                p1++;
                ans[i] = multi;
                multi = 1;
                k = 0;
                i++;
            }
        }

        return ans;
    }
};
