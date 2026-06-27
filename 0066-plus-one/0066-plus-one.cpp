class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        digits[digits.size() - 1] += 1 + carry;
        for(int i = digits.size() - 1 ; i >= 0  ; i--)
        { 
            digits[i] += carry;
            if(digits[i] >= 10)
            {
                carry = 1;
                digits[i] %= 10;
            }
            else
                {carry = 0;break;}
        }
        if(carry != 0)
        { 
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        else
            return digits;
    }
};