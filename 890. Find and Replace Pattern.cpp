#define pb push_back

class Solution {
public:
    string getNumPattern(string pattern){
        string numPattern = "";
        map<char,int> patMap;
        for(int i=0;i<pattern.size();i++){
            if(patMap.find(pattern[i]) == patMap.end()){
                patMap[pattern[i]] = i;
                numPattern += i;
            }
            else{
                numPattern += patMap[pattern[i]];
            }
        }
        return numPattern;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string numPattern = getNumPattern(pattern);
        vector<string> matchingWords;
        
        for(int i=0;i<words.size();i++){
            string numPatternToCompare = getNumPattern(words[i]);
            if(numPattern == numPatternToCompare){
                matchingWords.pb(words[i]);
            }
        }
        return matchingWords;
    }
};
