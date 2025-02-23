//https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     #include <cmath> 
    int cubeRoot(int n) {
       long low=0,high=n,mid;
       while(low<=high)
       {
           mid=(low+high)/2;
           if(pow(mid,3)==n)
           {
               return mid;
           }
           if(pow(mid,3)>n)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
       }
       return high;
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends