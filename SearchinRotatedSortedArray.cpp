class Solution {
public:
    int binSearch(int start,int end,int target,vector<int> nums)
    {
        if (start>end)
        {
            return -1;
        }
        int mid = start+(end-start)/2;
        if (nums[mid]==target)
        {
            return mid;
        }
        else if (nums[mid]>target)
        {
            return binSearch(start,mid-1,target,nums);
        }
        else
        {
            return binSearch(mid+1,end,target,nums);
        }
    }
    int search(vector<int>& nums, int target) {
        int minid;
        int n=nums.size();
        if (n==1)
        {
            if (target==nums[0]){return 0;}
            else{return -1;}
        }
        int l=0;
        int r=n-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if (mid==n-1 && nums[mid]<nums[mid-1])
            {
                std::cout<<mid;
                break;
            }
            else
            {
                if (nums[mid]<nums[n-1])
                {
                    std::cout<<mid;
                    if (mid==0)
                    {
                        break;
                    }
                    else if (nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1])
                    {
                        r=mid-1;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (nums[mid]>nums[n-1])
                {
                    std::cout<<mid;
                    l=mid+1;
                }
            }
        }
        std::cout<<"we reached here";
        int ans;
        ans=binSearch(0,mid-1,target,nums);
        std::cout<<"we reached here2";
        if (ans==-1)
        {
            ans=binSearch(mid,n-1,target,nums);
        }
        std::cout<<"we reached here3";
        return ans;
        
    }
};
