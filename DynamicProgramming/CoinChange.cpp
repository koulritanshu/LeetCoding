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

ll coin_change(ll n, ll arr[], ll amount){
    if(amount == 0){
        return 0;
    }
    ll mini = LLONG_MAX;
    for(ll i=0;i<n;i++){
        if(amount - arr[i] > 0){
            return min(mini,1 + coin_change(n,arr,amount-arr[i]));
        }
    }
    return mini;
}

class Solution {
public:
    vector<unsigned long long> dp;
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    long long int ans(vector<int>&coins, int amount){
        if(dp[amount] != -1) return dp[amount];  
        if(amount == 0) return 0;
        unsigned long long int mini = LLONG_MAX;
        for(int i=0;i<coins.size();i++){
            if(amount >= coins[i]){
                mini = min(mini,(unsigned long long)1 + ans(coins,amount-coins[i]));
            }
        }
        return dp[amount] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp = vector<unsigned long long>(10001,-1);
        return ans(coins,amount);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}