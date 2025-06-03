class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int ans=0;
        int left=0,right=1;

        for(int i=0;i<n;i++)
        { 
            if(nums[i]==1)
            {
                if(count==0)
                {
                    count=1;
                }
            }
            if (right < n && nums[left] == nums[right] && nums[left] == 1)

            {
                count++;

            }
            ans=max(ans,count);
            if(nums[i]!=1)
            {
                count=0;
            }
            left++,right++;
            
            
        }
        
    return ans;}
};
/*
my apporach : used normal logic and the main task for me is to check whether this array contains atleast single one or not*/
