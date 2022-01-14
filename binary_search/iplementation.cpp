# include <iostream>
using namespace std;
void binarysearch(int arr[],int n,int key)
{
    int s=0,e=n-1,mid=(n-1)/2;lkjhg
    while(s<=e)
    {
        cout<<"hello"<<endl;
        if(arr[mid]==key)
        {
            cout<<"element found"<<endl;
            return;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
    }
    cout<<"element not found"<<endl;
    return;
}
int main()
{
    int arr[]={1,2,4,7,8};
    binarysearch(arr,5,9);
}
