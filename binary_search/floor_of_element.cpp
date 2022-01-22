// written only function
int findFloor(long long int arr[], int N, long long int K) {
    int start=0,end=N-1,mid,res=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==K)
          return mid;
        else if(arr[mid]>K)
         end=mid-1;
        else if(arr[mid]<K)
        {
          res=mid;
         start=mid+1;
        }
    }
    return res;
}
