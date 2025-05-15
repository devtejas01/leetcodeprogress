class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
    int n=nums.size();
    int largest=0;
    int j=0;
    int i;
    for( i=1;i<n;i++)
        {
            if(nums[i]>nums[largest])
            {
                largest=i;
            }

        }
        for(i=0;i<n;i++)
        {
            if(largest==i)
            {
                continue;
            }
            else if(nums[largest]>=2*nums[i])
            {
                j++;
                if(j==n-1)
                {
                    return largest;
                }

            }
        }
        return -1;

    }
};
/*
findings this question is easy it is based on simple searching for the largest element in n time complexity
this follows a simple pattern in which we have to transverse through the array and find the largest number
*/