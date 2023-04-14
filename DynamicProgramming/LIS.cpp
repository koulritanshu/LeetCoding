#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
typedef long long ll;

// LONGEST INCREASING SUBSEQUENCE

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

ll dp[10001];

ll ans(ll n, ll arr[]){
    if(dp[n] != -1) return dp[n];
    ll curr = 1;
    for(ll j=0;j<n;j++){
        if(arr[n]>arr[j]){
            curr = max(curr,ans(j,arr)+1);
        }
    }
    return dp[n] = curr;
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    input(n,arr);
    ll curr = INT_MIN;
    for(int i=0;i<n;i++){
        curr = max(curr,ans(n,arr));
    }
    cout << curr << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    // cin >> t;
    memset(dp,-1,sizeof(dp));
    while (t--)
        solve();
    return 0;
}