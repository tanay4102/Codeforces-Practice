class Solution {
public:
     bool increasingTriplet(vector<int>& nums) {
        vector<int> dp;
        for(int i=0;i<nums.size();i++){
            int pos = lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
            std::cout<<pos;
            if(pos == dp.size()){
                dp.push_back(nums[i]);
            }
            else{
                dp[pos] = nums[i];
            }
        }
        if(dp.size()>=3) return true;
        return false;
    }
};
