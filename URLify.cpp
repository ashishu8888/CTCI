
#include <iostream>

using namespace std;

int main()
{
    string s = "Mr bill smith      ";
    string a = "%20";
    int l = 13;
    
    string ans = "";
    
    for(int i=0;i<l;i++)
    {
        if(s[i] == ' ')
        {
            ans += a;
        }
        else{
            ans += s[i];
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
