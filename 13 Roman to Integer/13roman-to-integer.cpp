class Solution {
public:
    int romanToInt(string s) {
        int output=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'I')
            {
                if(i+1 < s.length() && (s[i+1] == 'V' || s[i+1] == 'X'))
                {
                    output = output-1;
                }
                else 
                {
                    
                    output=output+1;
                    cout << output << endl;
                }

            }
            else if (s[i] == 'V')
            {
                {
                    output=output+5;
                }
            }
            else if (s[i] == 'X')
            {
                if(i+1 < s.length() && (s[i+1] == 'L' || s[i+1] == 'C'))
                {
                    output = output-10;
                }
                else 
                {
                    output=output+10;
                }
            }
            else if (s[i] == 'L')
            {
                {
                    output=output+50;
                }
            }
            else if (s[i] == 'C')
            {
                if(i+1 < s.length() && (s[i+1] == 'D' || s[i+1] == 'M'))
                {
                    output = output-100;
                }
                else 
                {
                    output=output+100;
                }
            }
            else if (s[i] == 'D')
            {
                {
                    output=output+500;
                }
            }            
            else if (s[i] == 'M')
            {
                {
                    output=output+1000;
                }
            } 
        }
            return output;
    }

};