class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s = nums.size();
        int mmax = nums[s-1];
        int mmin = nums[s-1];
        int r = mmax;

        for(int i=s-2; i>=0;i--)
        {
            int n = nums[i];
            if(n < 0) swap(mmax, mmin);

            mmax = max(n, mmax*n);
            mmin = min(n, mmin*n);

            r = max(r, mmax);            
        }

        return r;
    }
};