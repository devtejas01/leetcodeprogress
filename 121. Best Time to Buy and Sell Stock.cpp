#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,1,7,8,2,4,5};
    int n=sizeof(arr)/sizeof(arr[1]);
    /* i will use the classic two pointer approach in this approach what i will do if find the greatest difference of two number that one number should be in the left and other should be in the right side lets start */
    int leftpointer,rightpointer,ans=0,temp=0,diff;
    for ( leftpointer = 0; leftpointer< n; leftpointer++)
    {
       for ( rightpointer = leftpointer+1; rightpointer < n; rightpointer++)
       {
        diff=arr[rightpointer]-arr[leftpointer];
        if (temp<diff)
        {
            temp=diff;
        }
        

       }
       if (temp>ans)
       {
        ans=temp;
       }
       
    
    }
    cout<<ans;
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1623168368/


































}