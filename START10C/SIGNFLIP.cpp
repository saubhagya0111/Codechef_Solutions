#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s, element;
        cin >> n >> k;
        vector<int> a;
        //Time Complexity:- O(NlogN)
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            a.push_back(element);
        }
        //Sorting the elements of the array so the the -ve elements are lined up in the beginning
        sort(all(a));
        //As there is a cap (maximum number of element=1) on the number of elements to be multiplied by (-1)
        for (int i = 0; i < k; i++)
        {
            if (a[i] < 0)
            {
                a[i] = (a[i] * (-1));
            }
        }
        ll sum = 0;
        //Summing up the +vs elements in order to maximize the sum of the subarray
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                sum += a[i];
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
