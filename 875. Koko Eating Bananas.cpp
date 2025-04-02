//https://leetcode.com/problems/koko-eating-bananas/
class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int n=piles.size();
            int m=1,i,high;
            for(i=0;i<n;i++)
            {
                if (high<piles[i])
                {
                    high=piles[i];
                }
    
            }it
            long long sum=0;
            while(m<=high)
            {sum=0;
            for(i=0;i<n;i++)
                {
                
              sum += (piles[i] + m - 1) / m;
    
    
                }
                if(sum<=h)
                {
                    return m;
                }
                m++;
            }
        return -1;}
    };