class Solution {
public:
    int findComplement(int num) {
        int temp = 1,ans=0;
        while(num)
        {
            if(!(num & 1))
            {
                ans += temp;
            }
            temp <<= 1;
            num >>= 1;
        }
        return ans;
    }
};
