//two pointer approach
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int p1=0,p2=n-1;
        while(p1<p2)
        {
            if(nums[p1]+nums[p2]==target)
            {
                return {p1 ,p2};
            }
            else if(nums[p1]+nums[p2]<target)
                  {
                    p1++;
                  }
                  else
                  {
                    p2--;
                  }
        }
        return { 0, 0}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        }
    };