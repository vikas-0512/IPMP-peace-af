class Solution {
public:
    int min_index(vector<int> &nums)
    {
        int s=0,mid,n=nums.size(),e=n-1;
        if(n==1)
            return 0;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[(mid+1)%n]>nums[mid] && nums[(mid+n-1)%n]>nums[mid])
                return mid;
            else if(nums[(mid+1)%n]<nums[mid] && nums[(mid+n-1)%n]<nums[mid])
                return (mid+1)%n;
            else if(nums[mid]>nums[s])
                s=mid+1;
            else if(nums[mid]<nums[e])
                e=mid-1;
        }
        return 0;
    }
    int binary_search(vector <int> &nums,int start,int end,int target)
    {
        int mid;
        while(start<=end)
        {
          mid=start+(end-start)/2;
          if(nums[mid]==target)
              return mid;
          else if(target<nums[mid])
              end=mid-1;
          else if(target>nums[mid])
              start=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int index=min_index(nums),ans=-1;
        if(target==nums[index])
            return index;
        if(target<=nums[nums.size()-1])
            ans=binary_search(nums,index,nums.size()-1,target);
        else if(target>nums[nums.size()-1])
            ans=binary_search(nums,0,index-1,target);
        return ans;
    }
};
