class Solution {
public:
    string convert(string s, int numRows) {
    if(s.length() <= numRows || numRows == 1 )
        return s;
    int jmp1 = (numRows - 1) + (numRows - 2) , jmp2 = -1;
    string zigZag;
    for(int i = 0 ; i < numRows ; i++)
    {
        zigZag.push_back(s[i]);
        int idx1 = i + 1, jmpCnd = 1;
        if(jmp1 > 0 )
            idx1 += jmp1;
        else
            idx1 += jmp2;
        while(idx1 < s.length())
        {
            if(jmp2 < 0)
                {zigZag.push_back(s[idx1]);
                idx1 += jmp1;}
            else if(jmp1 < 0)
                {zigZag.push_back(s[idx1]);
                idx1 += jmp2;}
            else if(jmpCnd % 2 != 0)
            {
                zigZag.push_back(s[idx1]);
                idx1 += jmp2;;
            }
            else if(jmpCnd % 2 == 0)
                {zigZag.push_back(s[idx1]);
                idx1 += jmp1;}
            
            jmpCnd++;
            idx1++;
        }
        jmp1 -= 2;
        jmp2 += 2;
    }
    return zigZag;
}
};