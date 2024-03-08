class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int > m_nums;
        int m = INT_MIN;
        for (auto& num : nums)
        {
            m_nums[num] += 1;
            m = max(m_nums[num], m);
        } 

        int total = 0;
        for(auto& k: m_nums)  
        {
            if(k.second == m)
            {
                total += m;
            }
        }

        return total;
    }
};