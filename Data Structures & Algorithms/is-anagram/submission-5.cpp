class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::map<char, int> ms;
        std::map<char, int> mt;

        for (int n : s)
            ms[n]++;
        for (int n : t)
            mt[n]++;

        for (int n : s)
            if (ms[n] != mt[n])
                return (false);

        for (int n : t)
            if (ms[n] != mt[n])
                return (false);
        return (true);
    }
};
