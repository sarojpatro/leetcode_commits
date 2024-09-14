class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> m;
        for(auto& n:nums)
        {
            m[n] += 1;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(auto& n: m)
        {
            pq.push(pair(n.second, n.first));
            if(pq.size() > k) pq.pop();
        }

        vector<int> a;
        while(pq.size() > 0)
        {
            a.push_back(pq.top().second);
            pq.pop();
        }

        return a;
    }
};