#include<iostream>
using namespace std;
int main()
{
int i,j,k,z=0,a[5]={2,3,1,4,5};
for(i=1;i<5;i++)
{
 for(j=i-1;j>=0;j--)
 {
     z=0;
     if(a[i]>a[j])
     {
     z=1;
     }
     if(a[i]<a[j])
     {
     z=2;
     break;
     }
     }



 }

 for(j=i+1;j<=5;j++)
 {

     if(a[i]<a[j])
     {
     z=1;
     }
 if(a[i]>a[j])
     {
     z=2;
     break;
     }
     if(z==2)
     {
     break;
     }

 }



if(z==1)
{


  cout<<i;
}

}




