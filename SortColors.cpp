class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;int blue=0;int white=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==0)
            {
                red++;
            }
            else if(nums[i]==1)
            {
                white++;
            }
            else
            {
                blue++;
            }
        }
        int ind=0;
        while(red!=0)
        {
            nums[ind]=0;
            ind++;
            red--;
        }
        while(white!=0)
        {
            nums[ind]=1;
            ind++;
            white--;
        }
        while(blue!=0)
        {
            nums[ind]=2;
            ind++;
            blue--;
        }
    }
};
