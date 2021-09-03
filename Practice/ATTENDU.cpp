#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, counter = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '1')
            {
                counter++;
            }
        }
        if (counter + (120 - n) >= 90)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
}
