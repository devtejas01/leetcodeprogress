class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n=nums.size();
            int i;
            sort(nums.begin(),nums.end());
            for(i=0;i<n;i++)
            {
                if(nums[i]!=i)
                {
                    return i;
                }
            }
            return n;
            
        }
    };
    //binnary search can be also implemented as 
   /*
    mid == arr[mid]: This means we can discard the left half and move to the right side.
    iske peeche wala sara sorted hain so think like ki peeche sorted hain to agey heena glt hoskta so we will check to the left side

    mid < arr[mid]: Missing number is in the left half, so we discard the right side.
    agr mid se bara hain arr[mid] iska matlab yeh nikal rha hain ki hum number line ke peeche kheeche hain 0 ke about that means ki peeche se hee number missing hoskta


    mid > arr[mid]: Missing number is in the right half, so we discard the left side.
    agr mid se chota hain arr[mid] iska mtlb yehi hain ki hum number line ke hum number line ke agey khecche hain 0 ke about that why peeche wale sare number honge domain main but agey se koi miss hogaya hoga
    */