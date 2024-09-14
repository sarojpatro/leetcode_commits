class Solution {
public:
    string frequencySort(string s) {

        map<char, int> m;
        for(auto& c: s) m[c]+=1;

        priority_queue<pair<int, char>, vector<pair<int, char>>> pq;
        for(auto& i: m)
        {
            pq.push(pair(i.second, i.first));
        }

        string ret;
        while(pq.size() > 0)
        {
            pair<int, char> p = pq.top();
            int n = p.first;
            char c = p.second;
            for(int i=0; i<n; i++)
            {
                ret+=c;
            }

            pq.pop();
        }


        return ret;
        
    }
};