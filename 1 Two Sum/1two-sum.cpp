class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash_map;
        for (int i = 0; i < nums.size() ; i++)
        {
            int diff = target - nums[i];
            if(hash_map.find(diff) != hash_map.end())
            {
                return vector<int>{hash_map[diff], i};
            }
            else
            {
                hash_map[nums[i]]=  i;
            }
        }
        return vector<int>{};
    }
};