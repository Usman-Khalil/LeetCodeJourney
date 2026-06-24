class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0)
            return false; 
        vector<int>stack;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(stack.empty())
                    return false;
                if(s[i] == ')')
                    {if(stack[stack.size() - 1] == '(')
                        stack.pop_back();
                    else
                        return false;}
                else if(s[i] == '}')
                    {if(stack[stack.size() - 1] == '{')
                        stack.pop_back();
                    else
                        return false;}
                else if(s[i] == ']')
                    {if(stack[stack.size() - 1] == '[')
                        stack.pop_back();
                    else
                        return false;}
            }
            else
                stack.push_back(s[i]);
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};