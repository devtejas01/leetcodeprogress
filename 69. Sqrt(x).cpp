//https://leetcode.com/problems/sqrtx/
class Solution {
    public:
        int mySqrt(int x) {
            long high=x,low=0,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(mid*mid==x)
                {
                    return mid;
                }
                if(mid*mid>x)
                {
                    high=mid-1;
                }
                else{ 
                    low=mid+1;
                }
            }
            return high;
        }
    };