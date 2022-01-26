#include<bits/stdc++.h>
using namespace std;
int main()
{
 int find_min_diff( int arr[],int n,int k);   
int arr[]={2,6,3,4,7,2,10,3,2,1};
int n=10;
int k=5;
 int w=find_min_diff(arr,n,k);
 cout<<w;
 return 0;
}


int find_min_diff(int arr[],int n,int k){
sort(arr,arr+n);
int big=0;
int small=0;
int diff=0;
int minimum=arr[n-1]-arr[0];

for(int i=1;i<n;i++){
    // X=arr[i-1]+k
    // Y=arr[i]-k
    int big=max(arr[n-1]-k,arr[i-1]+k);
    int small=min(arr[0],arr[i]-k);
    int diff=big-small;
    minimum=min(minimum,diff);
}
return minimum;
}