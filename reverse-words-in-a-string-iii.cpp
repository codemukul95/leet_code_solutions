#define pb push_back
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int l = s.size()-1;
        string temp = "";
        for(int i=0;i<=l;i++)
        {
            if(s[i] == ' ')
            {
                reverse(temp.begin(),temp.end());
                v.pb(temp);
                temp = "";
            }
            else
            {
                temp += s[i];
            }
            if(i == l)
            {
                reverse(temp.begin(),temp.end());
                v.pb(temp);
            }
        }
        string ans = "";
        for(int i=0;i<v.size();i++)
        {
            ans += v[i];
            if(i != v.size()-1)
            {
                ans += ' ';
            }
        }
        return ans;
    }
};
