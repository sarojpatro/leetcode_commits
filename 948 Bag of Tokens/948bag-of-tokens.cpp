class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        if(tokens.size() == 0) return 0;
        if(tokens.size() == 1) return power >= tokens[0] ? 1 : 0;


        //Sort it
        sort(tokens.begin(), tokens.end());

        //Two pointers one from beginning and another from end
        auto it1 = tokens.begin();
        auto it2 = tokens.end()-1;

        int m=0; int mx= 0;
        while(it1 <= it2)
        {
            if(power >= *it1)
            {
                power -= *it1;
                it1++;
                m+=1;
                mx = max(mx, m);
            }
            else if (m > 0)
            {
                m-=1;
                power += *it2;
                it2--;
            }
            else
            {
                break;
            }
        }


        return mx;
    }
};