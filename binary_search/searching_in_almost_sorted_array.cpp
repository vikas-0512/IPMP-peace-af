# include <bits/stdc++.h>
using namespace std;
int searching(int arr[],int n,int k)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
        return mid;
        else if(mid-1>=0 && arr[mid-1]==k)
        return mid-1;
        else if(mid+1<=n-1 && arr[mid+1]==k)
        return mid+1;
        else if(arr[mid]<k)
         start=mid+2;
        else if(arr[mid]>k)
          end=mid-2; 
    }
    return -1;
}
int main()
{
    int k,arr[]={2,1,4,3,8,6};
    cout<<"element needed to be searched"<<endl;
    cin>>k;
    if(searching(arr,6,k)==-1)
     cout<<"element not found"<<endl;
    else 
     cout<<"element found at index "<<searching(arr,6,k)<<endl;
}
