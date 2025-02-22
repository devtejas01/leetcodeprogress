//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
    
    
    
        if (nums.empty()) return {-1, -1};
         int x1=-1,x2=-1;
        int n = nums.size();
        int low=0,high=n-1,mid;
        if(low==high)
          {
            if(nums[low]==target)
             vector<int>{0,0};
             else
             vector<int>{-1,-1};
          } 
        while (low<=high)
        {
            mid=(low+high)/2;
            if (nums[mid]==target)
            {
                x1=mid;
                high=mid-1;
            }
            
            if (nums[mid]>target)
            {
                high=mid-1;
            }
            else if (nums[mid]<target)
            {
                low=mid+1;
            }
            
        }
        if (x1!=-1)
        {
            low=0,high=n-1;
            while (low<=high)
        {
            mid=(low+high)/2;
            if (nums[mid]==target)
            {
                x2=mid;
                low=mid+1;
            }
            
            if (nums[mid]>target)
            {
                high=mid-1;
            }
            else if (nums[mid]<target)
            {
                low=mid+1;
            }
            
        }
          return vector<int>{x1, x2};
    
        }
    return vector<int>{x1, x2};
            
        }
    };