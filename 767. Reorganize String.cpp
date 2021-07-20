class Solution
{
    public:
    string reorganizeString(string s)
    {
        unordered_map<char, int> cnt;

        char max_alpha; 
        int n = s.size();

        for(char c : s)
        {
            cnt[c]++;
            if(cnt[c] > cnt[max_alpha])
                max_alpha = c; 
        }

        if(cnt[max_alpha] > (n + 1)/2) 
            return "";

        int idx = 0;
        while(cnt[max_alpha]) 
        {
            s[idx] = max_alpha;
            idx += 2;
            cnt[max_alpha]--;
        }

        for(auto i: cnt)
        {
            while(i.second)
            {
                if (idx >= n)
                    idx = 1;
                s[idx] = i.first;
                i.second--;
                idx+=2;
            }
        }

        return s;
    }
};
