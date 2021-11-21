#include <bits/stdc++.h>
using namespace std;

//Problem Code/Link:
//Codechef profile: @saubhagya0111
//Codeforces profile: @saubhagya011
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
#define incr_loop(a, n) for (i = a; i < n; ++i)
#define decr_loop(a, b) for (i = a; i > b; --i)
#define nested_incr_loop(a, b) for (int j = a; j < b; ++j)
#define nested_decr_loop(a, b) for (int j = b; j > a; --j)
typedef long long ll;
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
/**************Debugger*************/
void _print(int a) { cerr << a << endl; }
void _print(long long a) { cerr << a << endl; }
void _print(bool a) { cerr << a << endl; }
void _print(char a) { cerr << a << endl; }
template <class T>
void _print(vector<T> v1)
{
    cerr << "[";
    for (T i : v1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
template <class T>
void _print(set<T> s1)
{
    cerr << "[";
    for (T i : s1)
    {
        _print(i);
        cerr << " ";
        cerr << "]" << endl;
    }
}
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << "="; \
    _print(x);         \
    cout << endl;
#else
#define debug(x)
#endif
/************************************/
bool contains_lower(string s)
{
    int i;
    incr_loop(0, s.length())
    {
        if (islower(s[i]))
        {
            return true;
            break;
        }
    }
    return 0;
}
bool contains_upper(string s)
{
    int i;
    incr_loop(1, s.length() - 1)
    {
        if (isupper(s[i]))
        {
            return true;
            break;
        }
    }
    return 0;
}
bool contains_digit(string s)
{
    int i;
    incr_loop(1, s.length() - 1)
    {
        if (isdigit(s[i]))
        {
            return true;
            break;
        }
    }
    return 0;
}
bool contains_special_char(string s)
{
    int i;
    incr_loop(1, s.length() - 1)
    {
        if (s[i] == '@' or s[i] == '#' or s[i] == '%' or s[i] == '&' or s[i] == '?')
        {
            return true;
            break;
        }
    }
    return 0;
}
bool return_length(string s)
{
    if (s.length() >= 10)
    {
        return true;
    }
    return false;
}
void solution()
{
    int i, j, n, m, n1 = 0, element, a, b, flag = 0;
    string s;
    in(s);
    if (contains_lower(s) == true and contains_upper(s) == true and contains_digit(s) == true and contains_special_char(s) == true and return_length(s) == true)
    {
        out("YES");
        line;
    }
    else
    {
        out("NO");
        line;
    }
    
}
/************************************/
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("Error.txt", "w", stderr);
    // #endif
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