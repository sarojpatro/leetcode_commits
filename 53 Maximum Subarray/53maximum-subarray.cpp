class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = nums.size();
        int m = nums[s-1];
        for(int i=s-2; i>=0;i--)
        {
            if(nums[i]+nums[i+1] > nums[i])
            {
                nums[i] = nums[i] + nums[i+1];
                
            }
            m = max(m, nums[i]);
        }
        return m;
    }
};