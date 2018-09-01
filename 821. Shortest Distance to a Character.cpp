#define pb push_back

class Solution {
public:
    
    int minDiff(vector<int> &presenceC, int key){
        int lo = 0, hi = presenceC.size()-1;
        int mid, index, diff=INT_MAX;
        while(lo <= hi){
            mid = lo + (hi-lo)/2;
            if(presenceC[mid] == key){
                return 0;
            }
            else if(presenceC[mid] < key){
                if(abs(presenceC[mid]-key) < diff){
                    diff = abs(presenceC[mid]-key);
                    index = presenceC[mid];
                }
                lo = mid+1;
            }
            else{
                if(abs(presenceC[mid]-key) < diff){
                    diff = abs(presenceC[mid]-key);
                    index = presenceC[mid];
                }
               hi = mid-1;
            }
        }
        return abs(index-key);
    }
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int> presenceC;
        for(int i=0;i<n;i++){
            if(S[i] == C){
                presenceC.pb(i);
            }
        }
        vector<int> shortDist(n,0);
        for(int i=0;i<n;i++){
            int sd = minDiff(presenceC,i);
            shortDist[i] = sd;
        }
        return shortDist;
    }
};
