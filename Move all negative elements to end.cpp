//https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n=arr.size();
        int ni[n];
int i,j,negpos;
int k=0;
for ( i = 0; i < n; i++)
{
    if (arr[i]<0)
    {
       ni[k]=i;
       k++;

    }
    else{ continue ;}
}
for ( i = 0; i <k; i++)
{ negpos=ni[i]-i;
   for ( j = negpos; j<n-1; j++)
   {
    swap(arr[j],arr[j+1]);
   }
   
   
}
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends