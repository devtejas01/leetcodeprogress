//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int value;
        int i=0,j=height.size()-1;
        int ans=(height[i]>height[j]?height[j]:height[i])*abs(j-i);
        while(i<j)
        {
            value=(height[i]>height[j]?height[j]:height[i])*abs(j-i);
            if(height[i]<=height[j])
               {
                 i++;
               }
               else
               {
                j--;
               }
               if(value>ans)
               {
                ans=value;
               }
        }
        return ans;

    }
};
/*
so in this questions 
obeservation:- in this question we observed that we have to find the largest rectangel i mean the rectangle with most area
so my first approach should be brute force where i will use two loop and find the value of area that mean i will find the value for every ith index array for its respective jth index also remember that j starts from 0 each time and also when j==i just continue the loop
ok but the brute force approach is not so good it will create a mess an a bad time complexity of n^2 which will not an efficient solution
so the next i can think of two pointer appraoch using binnary search what i am doing is moving forward if the ith element is smaller then the jth element and backward when jth element is smaller than the ith element which will help me to find areas of all differnet rectangels
now approach 
i will use two pointer
ans will update when we find the ans bigger than ours 
in the end we will return ans 
also ith value will be incremented when height[i]<=height[j] we use equal since we have to traverse whole array it may happen that the heightp[i]==height[j] in this case traversing might be stopped
now jth value will increase in the else block since it will increase whe height[i]>height[j]*/