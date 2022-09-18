/*
Question Link : https://codeforces.com/problemset/problem/1294/C
*/

                    
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define vi vector<ll>
#define pi pair<ll, ll>
#define ti tuple<ll, ll, ll>
#define si set<ll>
#define msi multiset<ll>
#define mod 1000000007
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define rep(i, a, b) for (ll(i) = a; (i) <= (b); (i)++)
#define repe(i, a, b) for (ll(i) = a; i <= (b); (i)--)
#define endl '\n'
#define sortt(v) sort(v.begin(), v.end())
#define rsortt(v) sort(v.rbegin(), v.rend());
#define c(x) cout << x << " "
#define p(x) cout << x << endl
#define SQ(a) a *a
#define lb(x) lower_bound(v.begin(), v.end(), x)
#define up(x) upper_bound(v.begin(), v.end(), x)
#define er(x) equal_range(v.begin(), v.end(), x)
#define all(v) v.begin(), v.end()

void solve()
{
    ll n;
    cin >> n;
    int arr[3] = {}, p = 0;
    for (int i = 2; i * i < n && p < 2; i++)
    {
        if (n % i == 0)
            arr[p++] = i, n = n / i;
    }
    if (p != 2)
        NO;
    else
    {
        YES;
        cout << arr[0] << ' ' << arr[1] << ' ' << n << '\n';
    }
}

int32_t main()
{
    FIO;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}