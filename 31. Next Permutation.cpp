//https://leetcode.com/problems/next-permutation/description/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        int i,n=nums.size();
        for(i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                k=i-1;
                break;
                
            }
        }
        if(k==-1)
        {
            reverse(nums.begin(),nums.end());
            
        }
        else {
        for(i=n-1;i>k; i--)
        {
            if(nums[i]>nums[k])
            {
                swap(nums[i],nums[k]);
                break;
            }

        }
        reverse(nums.begin()+k+1,nums.end());
        }
        
    }
};
/*
intialy i have no intution on this question the i seen a video by striver then i came to know that it can be solved beautifuly by finding the hinging point 
k
so for finding k i did is just find the element from where the decreasing order is breaked 
and just marked it as the k
and rest is easy 
imp src https://www.youtube.com/watch?v=6ENl3OwwxLg*/