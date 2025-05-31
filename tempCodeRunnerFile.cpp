#include<iostream>
using namespace std;
int main()
{



int k=0,n=6,i,j;
int arr[]={1,2,3,4,5,6};
while(k<n)
{
    for(i=0;i<n;i++)
    { for ( j = i; j <= i+k; j++)
     {
        cout<<arr[j];
     }
    }
    cout<<endl;
     
}
return 0;































}