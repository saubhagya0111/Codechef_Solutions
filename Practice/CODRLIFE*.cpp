#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[30];
        ll counter = 0;
        for (int i = 0; i < 30; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 30; i++)
        {
            if (a[i] == 1 && a[i + 1] == 1 && a[i + 2] == 1 && a[i + 3] == 1 && a[i + 4] == 1 && a[i + 5] == 1)
            {
                ++counter;
            }
        }
        if (counter >= 1)
        {
            cout << "#coderlifematters" << endl;
        }
        else
        {
            cout << "#allcodersarefun\n";
        }
        
    }

    return 0;
}
