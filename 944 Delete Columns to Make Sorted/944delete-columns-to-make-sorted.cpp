class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if(sizeof(strs) ==  0) return 0;
        if(sizeof(strs) ==  1) return 0;
        int length = strs[0].length();
        int size = strs.size();
        int count = 0;

        for(int j=0; j<length; j++)
        {
            for(int i=0; i<size-1; i++)
            {
                if(strs[i][j] > strs[i+1][j])
                {
                    count += 1;
                    break;
                }
            }

        }
        return count;
    }
};