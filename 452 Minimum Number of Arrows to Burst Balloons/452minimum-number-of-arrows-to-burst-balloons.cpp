class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {

        sort(p.begin(), p.end());
        int lp = p[0][1];

        int num = 1;
        for(auto& point : p)
        {
            if(point[0] <= lp)
            {
                lp = min(lp, point[1]);
            }
            else
            {
                num++;
                lp = point[1];
            }
        }
        return num;
    }
};