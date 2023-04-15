#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
typedef long long ll;

// PART - 1: DISTINCT QUADRUPLETS   

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

void disp(vector<int> v){
    for(auto i:v){
        cout << i << " ";
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

// class Solution {
// public:
//     vector<int> dp;
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     bool increasingTriplet(vector<int>& nums) {
//         vector<int> left;
//         vector<int> right;
//         int curr = INT_MAX;
//         for(int i=0;i<nums.size();i++){
//             curr = min(curr,nums[i]);
//             left.push_back(curr);
//         }
//         curr = INT_MIN;
//         for(int j=nums.size()-1;j>=0;j--){
//             curr = max(curr,nums[j]);
//             right.push_back(curr);
//         }
//         reverse(right.begin(),right.end());
//         for(int i=1;i<nums.size()-1;i++){
//             if(left[i-1] < nums[i] && right[i+1] > nums[i]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution {
    // O(1) SPACE
public:
    vector<int> dp;
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool increasingTriplet(vector<int>& nums) {
        int left = INT_MAX;
        int mid = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < left){
                left = nums[i];
            }
            else if(nums[i] > mid){
                return true;
            }
            else if(nums[i] > left && nums[i] < mid){
                mid = nums[i];
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
  vector<int> nums = {20,100,10,12,5,13};
  Solution obj;
  cout << obj.increasingTriplet(nums);
  return 0;
}