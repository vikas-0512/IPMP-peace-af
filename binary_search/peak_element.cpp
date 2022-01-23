class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0,n=nums.size(),end=n-1,mid;
        if(n==1)
            return 0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(mid>0 && mid<n-1)
            {
                if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1])
                    return mid;
                else if(nums[mid+1]>nums[mid])
                    start=mid+1;
                else if(nums[mid-1]>nums[mid])
                    end=mid-1;
            }
            else if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                    return mid;
                else
                    return mid+1;
            }
            else if(mid==n-1)
            {
                if(nums[mid]>nums[mid-1])
                    return mid;
                else 
                    return mid-1;
                    
            }
        }
        return mid;
    }
};
