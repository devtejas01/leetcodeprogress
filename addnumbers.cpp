#include<iostream>
using namespace std;
int main()
{ int i=0,j=0,newsum=0,sum=0,n,k=0;
cin>>n;
int arr[16];
while (n!=0)
{ i=n/10;
  arr[i]=n-i*10;
  sum=sum+arr[i];
  n=n/10;
  i++;

    
}
k=sum,i=0;
while (sum>10)
{
    if (k==0)
    {   sum=newsum;
        
    }
   
   else{
    j=k/10;
    arr[i]=k-j*10;
    newsum=newsum+arr[i];
    k=k/10;
    i++;
   }
    



}
cout<<sum;




}