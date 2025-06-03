//https://leetcode.com/problems/rotate-array/description/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        while(k>n)
        {
            k=k-n;
        }
        int count=0;
        int p=n-k;
        vector<int> ans;
        while(count<n)
        {
            if(p==n) p=0;

            ans.push_back(nums[p]);
            count++;
            p++;

        }
        nums=ans;
    }
};

/*
my approach : actually i am using a new array in which i am storing the vector and in the end i just replace the nums to ans
the main problem is here i am doing this code in the time complexity of n and space complexity if n now i will try to code this code of space complexity of const

*/