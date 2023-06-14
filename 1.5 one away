class Solution {
public:
    /**
     * @param s: a string
     * @param t: a string
     * @return: true if they are both one edit distance apart or false
     */
    int replace(string &s, string &t)
    {
        int x = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i] )
            {
                if(!x)
                x++;
                else{
                    return 0;
                }
            }
            
        }
        return 1;
    }
    int insertion(string &s, string &t)
    {
        int n = s.length(), m = t.length(),x = 0,i=0,j=0;

        while(i<n and j<m)
        {
            if(s[i]!=t[j])
            {
                 if(!x)
                {
                    j++;
                    x++;
                }
                else{
                    return 0;
                }
                
                
            }
            else{
                i++;
                j++;
            }

        }

        return 1;
        
    }
    int deletion(string &s, string &t)
    {
        return insertion(t,s);
    }
    bool isOneEditDistance(string &s, string &t) {
        // write your code here
        int n = s.length(), m = t.length();
        if(s == t)
        {
            return 0;
        }
        if(n == m)
        {
            return replace(s,t);
        }
        else if(n+1 == m)
        {
            return insertion(s,t);
        }
        else if(m+1 == n)
        {
            return deletion(s,t);
        }
        else {
            return false;
        }
    }
};
