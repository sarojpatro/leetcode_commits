class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;

        for(auto& n: nums)
        {
            if(s.find(n) == s.end()) s.insert(n);
            else v.push_back(n);
        }

        return v;
    }
};