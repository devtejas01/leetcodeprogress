#include<iostream>
using namespace std;
int main()
{


int arr[]={3,4,-2,5,8,20-10,8};
//defining the array size 
int n=sizeof(arr)/sizeof(arr[0]);
//calculating total sum using one loop here
int i,sum=0;
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
int newsum=0;
for(i=0;i<n-1;i++)
{
    newsum=newsum+arr[i];
    sum=sum-arr[i];
    if(sum==newsum)
    {
        cout<<newsum<<endl;
        cout<<sum<<endl;
        cout<<i+1<<endl;
    }
}
































}