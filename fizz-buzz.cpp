#define pb push_back
class Solution {
public:
    string int_to_string(int n) //will not return correct string if the num<=0
    {
        string ans;
        while(n)
        {
            int dig = n%10;
            ans += ('0' + dig);
            n /= 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                ans.pb("FizzBuzz");
            }
            else if(i%3 == 0)
            {
                ans.pb("Fizz");
            }
            else if(i%5 == 0)
            {
                ans.pb("Buzz");
            }
            else
            {
                ans.pb(int_to_string(i));
            }
        }
        return ans;
    }
};
