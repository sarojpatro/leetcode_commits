class Solution {
public:
    int minimumLength(string s) {

        if(s.size() <= 1) return s.size();
        auto itr1 = s.begin();
        auto itr2 = s.end() - 1;

        while((*itr1 == *itr2) && (itr1 < itr2))
        {
            char c = *itr1;
            while (c == *itr1)
            {
                itr1++;
            }

            while (itr2 != s.begin() && c == *itr2)
            {
                itr2--;
            }
        }

        if(itr1 <= itr2) return itr2 - itr1 + 1;
        else return 0;
    }
};