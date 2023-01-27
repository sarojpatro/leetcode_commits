class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        if(strs.size() == 0)
        {
            return prefix;
        }

        if(strs.size() == 1)
        {
            return strs[0];
        }
        
        int length=strs[0].length();
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size() < length)
            {
                length = strs[i].size();
            }
        }

        for(int i=0; i <length; i++)
        {
            string x;
            for(int j=1;j<strs.size();j++)
            {
                x=strs[j][i];
                if(strs[j-1][i] != strs[j][i])
                {
                    return prefix;
                }
            }
            prefix.append(x);
        }
        return prefix;
    }
};