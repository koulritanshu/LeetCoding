#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
#define N 100001

ll power(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b / 2;
    }
    return res;
}

template <class T>
void display(ll n, T arr[])
{
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <class T>
void input(ll n, T arr[])
{
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    int temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

ll dp[N];
ll cost = 0;
ll sol(ll n, ll arr[]){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1) return dp[n];
    ll cost = LLONG_MAX;
    cost = min(cost,sol(n-1,arr)+abs(arr[n]-arr[n-1]));
    if(n>1){
        cost = min(cost,sol(n-2,arr)+abs(arr[n]-arr[n-2]));
    }
    return dp[n] = cost;
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    input(n,arr);
    ll ans = sol(n-1,arr);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(dp,-1,sizeof(dp));
    ll t = 1;
    //   cin >> t;
    while (t--)
        solve();
    return 0;
}