class Solution {
public:
    int strStr(string haystack, string needle) {  
        if (haystack.length() < needle.length())
            return -1;
        int matchingIdx = -1 , ptr1 = 0 , ptr2 = 0; 
        Again:
        ptr2 = 0;
        while(ptr1 < haystack.length() && haystack[ptr1] != needle[ptr2])
            ptr1++;
        if(ptr1 + needle.length() > haystack.length())
            return -1;
        matchingIdx = ptr1;
        while(ptr2 < needle.length())
        {
            if(haystack[ptr1] != needle[ptr2])
                {ptr1 = matchingIdx + 1;goto Again;} 
            ptr1++;ptr2++;
        }
        return matchingIdx; 
    }
};