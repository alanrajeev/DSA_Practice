#include <bits/stdc++.h>
using namespace std;
vector<bool> l(3);
void recursive(string s, string A)
{
    if (s.size() == A.size())
    {
        cout << A << endl;
        return;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (l[i] == false)
            {
                l[i] = 1;
                recursive(s, A+ s[i]);
                l[i] = 0;
            }
        }
    }
}
int main()
{
    string s, A = "";
    cout << "enter string  ";
    cin >> s;
    recursive(s, A);
    return 0;
}