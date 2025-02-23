//https://leetcode.com/problems/search-insert-position/submissions/1552586591/
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n=nums.size();
            if(n==0)
            {
                return 0;
            }
            int low=0,high=n-1,mid;
            while(low<=high)
                  {
                    mid=(low+high)/2;
                    if (nums[mid]==target)
                    {
                        return mid;
                    }
                    if(nums[mid]>target)
                    {
                        high=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                  }
                  return low;
        }
    };