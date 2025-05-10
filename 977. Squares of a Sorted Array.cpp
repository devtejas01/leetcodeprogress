//https://leetcode.com/problems/squares-of-a-sorted-array/description/
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            int p1 = 0, p2 = n - 1;
            vector<int> result(n);
            int index = n - 1;
    
            while (p1 <= p2) {
                int leftSq = nums[p1] * nums[p1];
                int rightSq = nums[p2] * nums[p2];
                if (leftSq > rightSq) {
                    result[index--] = leftSq;
                    p1++;
                } else {
                    result[index--] = rightSq;
                    p2--;
                }
            }
    
            return result;
            
        }
    };