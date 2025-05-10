class Solution {
    public:
        vector<int> settotheleftwithoutsigns(vector<int>& nums) {
          n=nums.size();
         int p1=0,p2=n-1;
         while(p1<p2)
         {
            nums[p1]<0?nums[p1]=-nums[p1]:nums[p1]=nums[p1];
            nums[p2]<0?nums[p2]=-nums[p2]:nums[p2]=nums[p2];
            if(nums[p1]<nums[p2])
            {
                p2--;
            }
            else
            {
                swap(nums[p1],nums[p2])
                p2--;
            }
         }
            
        }
    };
    //input [-4,-1,0,3,10] output [0,-1,3,-4,10];
    /*
    
    lets say p1 pointer rahega at the start which will point the first element p1=0;
    p2=n-1;
    so making sure that while traversing every element should be in modulus function
    so nums[p1]<0?nums[p1]=-nums[p1]:nums[p1]=nums[p1]
    same goes for p2----->nums[p2]<0?nums[p2]=-nums[p2]:nums[p2]=nums[p2]
    lets have a condition 
    
    
    
    
    */