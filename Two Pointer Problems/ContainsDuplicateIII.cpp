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

void solve()
{
}

class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
    {
        map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        while (i < nums.size() && j < nums.size())
        {
            cout << "i = " << i << " and j = " << j << endl;
            if (i == j)
            {
                j++;
            }
            else if (nums[j] - nums[i] <= valueDiff)
            {
                if (nums[i] == nums[j])
                {
                    cout << "Displaying the vector\n";
                    for (int z = 0; z < mp[nums[i]].size(); z++)
                    {
                        cout << mp[nums[i]][z] << " ";
                    }
                    cout << endl;
                    for (int z = 1; z < mp[nums[i]].size(); z++)
                    {
                        if ((mp[nums[i]][z] - mp[nums[i]][z - 1]) <= indexDiff)
                        {
                            return true;
                        }
                    }
                }
                else
                {
                    for (int x = 0; x < mp[nums[i]].size(); x++)
                    {
                        for (int y = 0; y < mp[nums[j]].size(); y++)
                        {
                            if (abs(mp[nums[i]][x] - mp[nums[j]][y]) <= indexDiff)
                            {
                                return true;
                            }
                        }
                    }
                }
                j++;
            }
            else
            {
                i++;
            }
        }
        if(indexDiff > 1) return false;
        for(int i1 = 1;i1<nums.size();i1++){
            if((nums[i1]-nums[i1-1]) == 1){
                for(int a1=0;a1<mp[nums[i1]].size();a1++){
                    for(int b1=0;b1<mp[nums[i1-1]].size();b1++){
                        if(abs(mp[nums[i1]][a1]-mp[nums[i1-1]][b1])<=indexDiff){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Solution obj;
    vector<int> v = {8, 7, 15, 1, 6, 1, 9, 15};
    cout << obj.containsNearbyAlmostDuplicate(v, 1, 3);
    return 0;
}