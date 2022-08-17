class Solution {
private:
    void swap(int &left, int &right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        // a = no of rows , b = no of columns
        int a = size(matrix);
        int b = a; //since same
        
        // 1st pass invert it (row becomes comlumn)
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if(i < j)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }

            }
        }
        
        // 2nd pass swap the columns
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b/2; j++)
            {
                //swap
                swap(matrix[i][j], matrix[i][b - j - 1]);
            }
        }
            
    }
};