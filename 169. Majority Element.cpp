//https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int i,ans=0;
        int fin;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for (auto &pair : freq)
        {
            if(pair.second>=n/2)
            {
                if(ans<pair.second)
                {
                    fin=pair.first;
                    ans=pair.second;
                }
            }
        }
        return fin;
    }
};
/*
actually i used an unordered map to map the elements to their frequency and then finded the element which frequency is greater than and equal to the n/2 
the main thing i learned in this how iterate through map and all
auto then addresed of an variale is passed then  colon is used then the name of the unordered map is used

*/