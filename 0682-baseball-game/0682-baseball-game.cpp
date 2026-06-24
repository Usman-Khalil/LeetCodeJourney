class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>stack;
        for(int i = 0 ; i < operations.size() ; i++)
        {
            if(operations[i] == "+" || operations[i] == "C" || operations[i] == "D")
            {
                if(operations[i] == "C")
                    stack.pop_back();
                else if(operations[i] == "D") 
                    stack.push_back(stack[stack.size() - 1] * 2);  
                else if(operations[i] == "+" )
                    stack.push_back(stack[stack.size() - 1] + stack[stack.size() - 2]) ; 
            }
            else
                stack.push_back(stoi(operations[i]));
        }
        int cal = 0;
        for(int i = 0 ; i < stack.size() ; i++)
            cal += stack[i];
        return cal; 
    }
};