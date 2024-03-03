class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> m_n;
        for(int i=0; i<nums.size();i++)
        {
            int k  = nums[i] * nums[i];
            auto it = lower_bound(m_n.begin(), m_n.end(), k);
            m_n.insert(it, k);
        }

        return m_n;
    }
};