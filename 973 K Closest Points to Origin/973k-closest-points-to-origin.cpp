class Solution {
public:
    double distance(int x, int y)
    {
        return sqrt(x*x+y*y);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double, int>>> pq;

        for(int i=0; i<points.size(); i++)
        {
            double d = distance(points[i][0], points[i][1]);
            pq.push(pair(d, i));
            if(pq.size() > k) pq.pop();
        }

        vector<vector<int>> a;
        while(pq.size() != 0)
        {
            pair<double, int> p = pq.top();
            a.push_back(points[p.second]);

            pq.pop();
        }

        return a;

    }
};