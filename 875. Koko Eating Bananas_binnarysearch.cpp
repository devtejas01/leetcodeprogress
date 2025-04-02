//https://leetcode.com/problems/koko-eating-bananas/description/
class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int low=1;
            int high=0;
            int n=piles.size();
            int ans;
            int i;
            for(i=0;i<n;i++)
            {
                if(high<piles[i])
                {
                    high=piles[i];
                }
            }
            int mid;
            while(low<=high)
            { mid=low+(high-low)/2;
                long long sum=0;
                for(i=0;i<n;i++)
                {
                    sum += (piles[i] + mid - 1) / mid;
                } 
                if(sum<=h)
                {
                    high=mid-1;
                    ans=mid;
                }
                else
                {
                    low=mid+1;
                }
            }
          return ans;  
    }
    };