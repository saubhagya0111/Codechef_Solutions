#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:KMAX2
//Codechef profile: @saubhagya0111
//Codeforces profile: @saubhagya011
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(i, n) for (i = 0; i < n; i++)
#define decr_loop(i, n) for (i = n; i > 0; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
#define maximum(a, b) max(a, b);
#define minimum(a, b) min(a, b);
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define sort_all(v) sort(all(v));
#define PI 3.141592653589793238462
#define space cout << ' ';
#define gcd(a, b) __gcd(a, b);
#define all(x) x.begin(), x.end()
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define string_in(x) getline(cin, x)
#define f first
#define s second
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef set<char> scr;
typedef set<string> sst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
/************************************/
void solution()
{
    int i, j, n, m, n1 = 0, element, a, b, k;
    ll counter = 0;
    in2(n, k);
    vi v;
    for (int i = 0; i < n; i++)
    {
        // in(v[i]);
        in(element);
        v.pb(element);
    }
    //Finding the maximum element of the array (vector) using inbuilt function
    int maximum = *max_element(all(v));
    //The element has to be the kth in the subarray which clearly means that the subarray to be generated should contain at least 'k' elements
    //The iterative for loop runs from (k-1) and goes upto n
    //The last index for the sub array to end at most at the size of the array (n)
    //As a result number of choices is (n-i) (sum of the series [i,i+1,i+2..................N])
    for (int i = k - 1; i < n; i++)
    {
        //Check if the element is equal to the maximum element and sum up the choices available (n-i)
        if (v[i] == maximum)
        {
            counter += n - i;
        }
    }
    //Time Complexity: O(N)
    out(counter);
    line;
}
/************************************/
int main()
{

    fio;
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int tt = 1;
    in(tt);

    while (tt--)
    {

        solution();
    }

    return 0;
}
