#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
#define N 100001
typedef long long ll;

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

template<class T>
void display(ll n, T arr[]){
  for(ll i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

template<class T>
void input(ll n, T arr[]){
  for(ll i=0;i<n;i++){
    cin >> arr[i];
  }
}

int power(int x, unsigned int y){
    if(y==0) return 1;
    int temp = power(x,y/2);
    if(y%2==0) return temp*temp;
    else return x*temp*temp;
}

ll dp[N];

ll ans(ll n,ll k, ll arr[]){
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    ll cost = INT_MAX;
    ll i = 2;
    cost = min(cost,ans(n-1,k,arr)+abs(arr[n]-arr[n-1]));
    while(n>=i && i<=k){
        cost = min(cost,ans(n-i,k,arr)+abs(arr[n]-arr[n-i]));
        i++;
    }
    return dp[n] = cost;
}

void solve(){
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    input(n,arr);
    cout << ans(n-1,k,arr) << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  memset(dp,-1,sizeof(dp));
  ll t = 1;
//   cin >> t;
  while(t--)  solve();
  return 0;
}