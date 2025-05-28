//https://leetcode.com/problems/4sum/description/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j,l,r,n;
        n=nums.size();
        if(n<4)
        return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> sol;
        for(i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
          for(j=i+1;j<n-2;j++)
          {
            if(j>i+1 && nums[j]==nums[j-1])
            continue;
            l=j+1,r=n-1;
            
            while(l<r)
            {  long long sum = 1LL * nums[i] + nums[j] + nums[l] + nums[r]; 
                if(sum==target)
                {
                    sol.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r&&nums[l-1]==nums[l])
                          l++;
                    while (l < r && r < n-1 && nums[r] == nums[r+1])
                      r--;      
                   
                }
                else if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }

                 
                
            }
              
              }


        }

        
   return sol; }
};
/*

approach :- used two pointers same like 3 sum fixing of integer fixed two integer
what i learnt :-checking all the edge cases using proper if else conditions also skipping the duplicates with caution
using a 2d vector array vector<vector<int>> sol is a 2d vector to store 4 dimensional values or maybe 5 dimensional values*/