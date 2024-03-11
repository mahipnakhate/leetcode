class Solution {
public:
    string customSortString(string order, string s) {
        std::unordered_map<char, int> charcount;
        for(char c:order)
        {
            charcount[c]=0;
        }
        for(char c:s)
        {
            if(charcount.find(c)!=charcount.end())
            {
                charcount[c]++;
            }
        }
        std::string sorteds;
        for(char c:order)
        {
            sorteds.append(charcount[c], c);

        }
        for(char c:s)
        {
            if(charcount.find(c)==charcount.end())
            {
                sorteds.push_back(c);
            }
        }
        return sorteds;
    }
};