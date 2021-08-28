#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:
//Codechef profile: @saubhagya0111
//Codeforces profile: @saubhagya011
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(i, n) for (i = 0; i <= n; i++)
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
    int i, j, n, m, n1 = 1, element, a, b;
    in(n);
    // ll sum = 0;
    //Time complexity:- O(N)
    //Calculating the sum of natural numbers using the formula of the complete array [1.......N]
    //If the sum is odd the next subsequence will obviously be even hence the length of the subsequence will be reduces by one 
    //Solution was optimized and the editorial was refered 
    int sum = (n + 1) * n * 0.5;
    if (sum % 2 == 0)
    {
        out(n);
        line;
    }
    else
    {
        out(n - 1);
        line;
    }
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
