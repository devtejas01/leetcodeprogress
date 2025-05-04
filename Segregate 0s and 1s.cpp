//https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int last,first;
        last=arr.size()-1;
        first=0;
        while(last>first)
        {
            if(arr[last]==0)
            {
                if(arr[first]==0)
                {
                    first++;
                }
                else{
                    swap(arr[first],arr[last]);
                    last--;
                }
                
            }
        
            else
            {
                last--;
            }
        }
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends