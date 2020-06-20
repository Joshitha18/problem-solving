class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    int size = strs.size();
    if (size == 0)return "";
    string prefix = strs[0];

for (int i = 1; i < size; i++)
{
    while ((strs[i].find(prefix) != 0))
    {
    prefix.resize(prefix.length() - 1);
    }
}
    return prefix;}
};

