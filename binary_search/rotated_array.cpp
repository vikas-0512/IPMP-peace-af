class Solution {
public:
    int findMin(vector<int>& nums) {
       int s=0,e=nums.size()-1,mid=-1,n=nums.size();
        if(nums.size()==1)
            return nums[0];
       while(s<=e)
       {
           mid=s+(e-s)/2;
           if(nums[(mid+1)%n]>nums[mid] && nums[(mid+n-1)%n]>nums[mid])
               return nums[mid];
           else if(nums[(mid+1)%n]<nums[mid] && nums[(mid+n-1)%n]<nums[mid])
               return nums[(mid+1)%n];
           else if(nums[mid]>nums[s])
               s=mid+1;
           else if(nums[e]>nums[mid])
               e=mid-1;
       }
        return nums[0];
    }
};
