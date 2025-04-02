//https://leetcode.com/problems/split-array-largest-sum/description/
class Solution {
    public:
        int splitArray(vector<int>& nums, int k) {int sum=0,minm=0;
        int n=nums.size();
        int i;
        for(i=0;i<n;i++)
        {
           sum=sum+nums[i];
           if(nums[i]>minm)
           {
            minm=nums[i];
           }
        }
          int low=minm,high=sum;
          int mid,page,student,ans;
          while(low<=high)
          {
            mid=low+(high-low)/2;
            page=0,student=1;
            for(i=0;i<n;i++)
            { page=nums[i]+page;
              if(page>mid)
              {
                student++;
                page=nums[i];
              }
            
            }
            if(student>k)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
                ans=mid;
            }
    
          } 
          return ans; 
        }
    };