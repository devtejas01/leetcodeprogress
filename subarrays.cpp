#include<iostream>
using namespace std;
int main()
{



int k=0,n=10,i,j;
int arr[]={1,2,3,4,5,6,7,8,9,10};
while(k<n)
{
    for(i=0;i<n-k;i++)
    { for ( j = i; j <= i+k; j++)
     {
        cout<<arr[j];
     }
     cout<<" ";
    }
    cout<<endl;
    k++;
     
}
return 0;































}