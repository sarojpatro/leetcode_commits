class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int, vector<int>> v;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j< matrix.size(); j++)
            {
                v.push(matrix[i][j]);
                if(v.size() > k) v.pop();
            }
        }

        return v.top();
    }
};