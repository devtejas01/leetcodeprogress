//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
     int z=0,o=0,t=0;
     int n=arr.size();
     int i;
     for(i=0;i<n;i++)
     {
         if(arr[i]==0)
         {
             z++;
         }
         else if(arr[i]==1)
         {
             o++;
         }
         else
         {
             t++;
         }
     }
  for (int i = 0; i < z; i++) arr[i] = 0;


for (int i = 0; i < o; i++) arr[z + i] = 1;    

for (int i = 0; i < t; i++) arr[z + o + i] = 2;
     
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends