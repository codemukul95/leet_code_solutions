class Solution {
public:
    int hammingDistance(int x, int y) {
        int hd = 0;
        while(x || y)
        {
            int bx = x&1 , by = y&1;
            if(bx != by)
            {
                hd++;
            }
            x>>=1;
            y>>=1;
        }
        return hd;
        
    }
};
