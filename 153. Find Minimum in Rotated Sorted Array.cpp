//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
class Solution {
    public:
        int findMin(vector<int>& nums) {
            int ans = INT_MAX;
            int n = nums.size();
            int low = 0, high = n - 1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
    
                if (nums[mid] <= nums[high]) {
                    ans = min(nums[mid], ans);
                    high = mid - 1;
                } else {
                    ans = min(nums[low], ans);
                    low = mid + 1;
                }
            }
            return ans;
            
        }
    };