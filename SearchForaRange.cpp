class Solution {
public:
    int binRight(vector<int>& nums, int target,int l, int r)
    {
        if (l>r)
        {
            return -1;
        }
        int mid=l+(r-l)/2;
        if (nums[mid]==target && (mid==nums.size()-1 || nums[mid+1]!=target))
        {
            return mid;
        }
        else if (nums[mid]==target && nums[mid+1]==target)
        {
            l=mid+1;
            return binRight(nums,target,l,r);
        }
        else
        {
            if (nums[mid]<target)
            {
                return binRight(nums,target,mid+1,r);
            }
            else
            {
                return binRight(nums,target,l,mid-1);
            }
        }
        return -1;
    }
    int binLeft(vector<int>& nums, int target,int l, int r)
    {
        if (l>r)
        {
            return -1;
        }
        int mid=l+(r-l)/2;
        if (nums[mid]==target && (mid==0 || nums[mid-1]!=target))
        {
            return mid;
        }
        else if (nums[mid]==target && nums[mid-1]==target)
        {
            r=mid-1;
            return binLeft(nums,target,l,r);
        }
        else
        {
            if (nums[mid]<target)
            {
                return binLeft(nums,target,mid+1,r);
            }
            else
            {
                return binLeft(nums,target,l,mid-1);
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==0)
        {
            return {-1,-1};
        }
        int n=nums.size();
        int x1 = binRight(nums,target,0,n-1);
        int x2 = binLeft(nums,target,0,n-1);
        return {x2,x1};
        
    }
};
