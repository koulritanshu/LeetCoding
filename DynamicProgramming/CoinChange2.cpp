#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
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

void solve(){
  
}

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int dp[310][5010];
    int combinations(int ind,int amount, vector<int>&coins){
        if(amount == 0){
            return 1;
        }
        if(ind < 0){
            return 0;
        }
        if(dp[ind][amount] != -1){
            return dp[ind][amount];
        }
        int ways = 0;
        for(int coin_amount = 0;coin_amount <= amount; coin_amount += coins[ind]){
            ways += combinations(ind-1,amount-coin_amount,coins);
        }
        return dp[ind][amount] = ways;
    }
    int change(int amount, vector<int>& coins) {
        for(int i=0;i<310;i++){
            for(int j=0;j<5010;j++){
                dp[i][j] = -1;
            }
        }
        return combinations(coins.size()-1,amount,coins);
    }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t = 1;
  cin >> t;
  while(t--)  solve();
  return 0;
}