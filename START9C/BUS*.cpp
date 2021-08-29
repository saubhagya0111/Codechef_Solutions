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
        //M: Capacity of the bus & q:Number of operations performed
        char ch;
        for (int i = 0; i < q; i++)
        {
            cin >> ch;
            int k;
            cin >> k;
            if (ch == '+')
            {
                //This implies that the passsenger is already present on the bus and as a result operation is invalid
                //(Any person can enter the bus exactly once)
                if (s.find(k) != s.end())
                {
                    valid = false;
                }
                else
                {
                    s.insert(k);
                    //Capacity of the bus is limited to m and more number of passengers cannot be accommodated
                    if (s.size() > m)
                    {
                        valid = false;
                    }
                }
            }
            else if (ch == '-')
            {
                //Passeneger is not present on the bus and cannot be removed from the said
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
