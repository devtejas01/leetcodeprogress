class Solution {
    public:
        int findPairs(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
    
         int first=0,last=1;
         int n=nums.size();
         int d,count=0;
         int currentlast=INT_MAX;
         int currentfirst=INT_MAX;
    
         while(last<n)
         {
           if (first == last) {
            if(last==n-1) break;//if last=first and also the last is equal to n-1 then if it goest beyond it then definately it will go to n which is out of bound in our case which can cause major overflow problem
            last++;
                            }
           d=nums[last]-nums[first];
           d = (d > 0) ? d : -d;//making d positive as the edge test cases might contains negative numbers but as the differnce always remain positive it is given in the question
    
           if (d == k && (currentlast!= nums[last]||currentfirst!=nums[first]))
           { 
            currentlast=nums[last];
            currentfirst=nums[first];
            last++;
            first++;
            count++;
           }
           else if(d<k)
           {
            last++;
           }
           else{
            first++;
           }
         }
         return count;
         
        }
    };