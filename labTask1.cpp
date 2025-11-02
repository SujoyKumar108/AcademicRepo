#include <bits/stdc++.h>
using namespace std;

void check_Num(string s)
{
    int flag = 0;
    for(char x : s)
    {
        if(x>='0' && x<='9')
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 0)
    {
        cout << "Numeric Constant" << endl;
    }
    else
    {
        cout << "Not Numeric" << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    check_Num(s);
    return 0;
}