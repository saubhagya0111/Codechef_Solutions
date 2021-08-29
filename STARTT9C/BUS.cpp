#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        bool valid = true;
        set<int> s;
        cin >> n >> m >> q;
        char ch;
        for (int i = 0; i < q; i++)
        {
            cin >> ch;
            int k;
            cin >> k;
            if (ch == '+')
            {
                if (s.find(k) != s.end())
                {
                    valid = false;
                }
                else
                {
                    s.insert(k);
                    if (s.size() > m)
                    {
                        valid = false;
                    }
                }
            }
            else if (ch == '-')
            {
                if (s.find(k) == s.end())
                {
                    valid = false;
                }
                else
                {
                    s.erase(k);
                }
            }
        }
        if (valid == true)
        {
            cout << "Consistent\n";
        }
        else
        {
            // out("")
            cout << "Inconsistent\n";
        }
    }

    return 0;
}
