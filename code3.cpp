#include<iostream>
using namespace std;
int maxisum(int a[],int n);
int main()
{
    int a[]={1,4,-6,2,7,8};
    int n=6;
   int m = maxisum(a,n);
   printf("%d",m);
 return 0;
}
int maxisum(int a[],int n)
{
    int currsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
currsum=currsum+a[i];
if(currsum>maxsum){
    maxsum=currsum;
}
if(currsum<0){
    currsum=0;
}

    }
    return maxsum;
}