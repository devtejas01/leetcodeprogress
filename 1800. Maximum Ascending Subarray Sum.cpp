class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),ans=INT_MIN,sum=0,i;
        if(n<=0)
        return 0;
        if(n==1)
         return nums[0];
        for(i=0;i<n;i++)
           {sum=sum+nums[i];
           ans=max(sum,ans);
            if(i<n-1&& nums[i]>=nums[i+1] ) sum=0;
             
             
              
            
           }
       return ans;
    }
};
/*

learnings checking for all edge cases like when n ==1 and n==0 not going out of the bound 
using max to find max without the if thing 
updating sum correctly and comparing ans correctly thats all i have learnt


*/