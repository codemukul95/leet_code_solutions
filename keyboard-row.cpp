#define pb push_back
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> dict;
        dict.pb("qwertyuiop");
        dict.pb("asdfghjkl");
        dict.pb("zxcvbnm");
        
        map<char,int> char_row;
        for(int i=0;i<dict.size();i++)
        {
            string temp = dict[i];
            for(int j=0;j<temp.size();j++)
            {
                char_row[temp[j]] = i+1;
            }
        }
        vector<string> filtered_words;
        for(int i=0;i<words.size();i++)
        {
            string temp = words[i];
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]>='A' && temp[j]<='Z')
                {
                    temp[j] = 'a'+(temp[j]-'A');
                }
            }
            int row = char_row[temp[0]];
            bool flag = true;
            for(int j=0;j<temp.size();j++)
            {
                if(char_row[temp[j]] != row)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
              filtered_words.pb(words[i]);
        }
        return filtered_words;
    }
};
