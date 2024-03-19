class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) 
    {

        sort(i.begin(), i.end());

        int sp = i[0][0];
        int ep = i[0][1];

        vector<vector<int>> r;
        vector<int> v1;

        for(auto& a : i)
        {

            if(a[0] <= ep)
            {
                ep = max(ep, a[1]);
            }
            else 
            {
                v1 = vector<int>{sp, ep};
                r.push_back(v1);

                sp = a[0];
                ep = a[1];
            }
        }

        v1 = vector<int>{sp, ep};
        r.push_back(v1);

        return r;
    }
};