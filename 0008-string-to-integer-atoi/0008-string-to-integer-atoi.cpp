class Solution {
public:
    int myAtoi(string s) {
        bool negative = false;
        int leadingSpace = 0;
        for(int i = 0 ; i < s.length() ; i++)
            if(s[i] >= '0' && s[i] <= '9')
                break;
            else if(s[i] == '+')
                {leadingSpace++;break;}
            else if(s[i] == '-')
                {negative = true;break;}
            else if(s[i] == ' ')
                leadingSpace++;
        int numCount = 0;
        for(int i = negative == true ? leadingSpace += 1 : leadingSpace ; i < s.length() ; i++)
            if((s[i] >= '0' && s[i] <= '9'))
                numCount++;
            else 
                break;
        numCount += leadingSpace - 1;
        long long int number = 0;
        for(int i = leadingSpace ; i <= numCount ; i++)
        {
             if (number > INT32_MAX / 10 ||
                (number == INT32_MAX / 10 && (s[i] - '0') > (negative ? 8 : 7)))
                return negative ? INT32_MIN : INT32_MAX;
            number = (number * 10) + (s[i] - '0');
        }
        return negative == true ? -number : number;
    }
};