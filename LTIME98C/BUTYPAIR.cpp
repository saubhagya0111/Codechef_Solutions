#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    int t;
    cin >> t;
    // fio;
    while (t--)
    {
        int n, element;
        cin >> n;
        vector<long double> a;
        //use larger data types for taking the input of the integers
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            a.push_back(element);
        }
        int counter = 0;
        //Variable to declare the
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                int diff = a[i] - a[j];
                if (diff / a[i] < diff / a[j])
                {
                    counter++;
                }
            }
        }
        cout << counter << endl;
    }

    return 0;
}
