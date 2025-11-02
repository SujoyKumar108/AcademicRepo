#include <bits/stdc++.h>
using namespace std;

vector<char> check_Operator(string s)
{
    vector<char> v;
    for(char x : s)
    {
        switch (x)
        {
        case '+':
            v.push_back(x);
            break;
        case '-':
            v.push_back(x);
            break;
        case '*':
            v.push_back(x);
            break;
        case '/':
            v.push_back(x);
            break;
        case '=':
            v.push_back(x);
            break;
        case '%':
            v.push_back(x);
            break;
        default:
            break;
        }
    }

    return v;
}
int main()
{
    string s;
    cin >> s;
    vector<char> q = check_Operator(s);


    if(!q.empty())
    {
        for(int i = 0 ; i<q.size(); i++)
        {
            cout << "Operator "<<i+1<<": " <<  q[i] << endl;
        }
    }
    else
    {
        cout << "No Operators available" << endl;
    }
    return 0;
}