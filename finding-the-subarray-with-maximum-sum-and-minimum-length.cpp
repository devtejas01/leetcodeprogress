#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> arr;
    // int n;
    // while (n!=NULL)
    // { cin>>n;
    //     if(n==NULL) continue;
    //     arr.push_back(n);
    // }
    // n=arr.size();//size of the array

    // using normal array we can use the vector also for dynamic storage which i have shown and commneted it out as it will waste time
    int arr[]={1,0,-2,3,-1};
    // we have to find the largest sum with the smallest subarray 
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,sum=0,ans=INT_MIN,size,count;
    for ( i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        size++;
        if(sum<0)
        {
            sum=0;
            size=0;
        }
        else if(sum>ans)
             {
                count=size;
                ans=sum;

             }
    }
    cout<<ans<<endl<<count;
    
    

    
}