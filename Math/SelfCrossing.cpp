/*
https://leetcode.com/problems/self-crossing/solutions/729133/how-to-explain-to-interviewer-335-self-crossing/?orderBy=most_votes
*/


#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
typedef long long ll;

// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     bool isSelfCrossing(vector<int>& distance) {
//         map<pair<int,int>, bool> mp;
//         int x = 0;
//         int y = 0;
//         mp[{0,0}] = true;
//         for(int i=0;i<distance.size();i++){
//             // if divisible by 4 go up
//             // if remainder 1 go left
//             // if remainder 2 go down
//             // if remainder 3 go right
//             int cal = i % 4;
//             if(cal == 0){
//                 int temp = y;
//                 y+=distance[i];
//                 for(int z=temp+1;z<=y;z++){
//                     if(mp[{x,z}] == true){
//                         return true;
//                     }
//                     else mp[{x,z}] = true;
//                 }
//             }
//             else if(cal == 1){
//                 int temp = x;
//                 x-=distance[i];
//                 for(int z=temp-1;z>=x;z--){
//                     if(mp[{z,y}] == true){
//                         return true;
//                     }
//                     else mp[{z,y}] = true;
//                 }
//             }
//             else if(cal == 2){
//                 int temp = y;
//                 y-=distance[i];
//                 for(int z=temp-1;z>=y;z--){
//                     if(mp[{x,z}] == true){
//                         return true;
//                     }
//                     else mp[{x,z}] = true;
//                 }
//             }
//             else if(cal == 3){
//                 int temp = x;
//                 x+=distance[i];
//                 for(int z=temp+1;z<=x;z++){
//                     if(mp[{z,y}] == true){
//                         return true;
//                     }
//                     else mp[{z,y}] = true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool isSelfCrossing(vector<int>& distance) {
        if(distance.size()<=2) return false;
        for(int i=3;i<distance.size();i++){
            if(distance[i-3] >= distance[i-1] && distance[i] >= distance[i-2]){
                return true;
            }
            else if(i>=4 && (distance[i-1] == distance[i-3]) && (distance[i-4]+distance[i] >= distance[i-2])){
                return true;
            }
            else if(i>=5 && (distance[i-3]>=distance[i-1]) && (distance[i-2]>=distance[i-4]) && ((distance[i-5]+distance[i-1])>=distance[i-3]) && ((distance[i]+distance[i-4])>=distance[i-2])){
                return true;
            }
        }
        return false;
    }
};

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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  vector<int> v = {1,1,2,2,3,3,4,4,10,4,4,3,3,2,2,1,1};
  Solution obj;
  cout << obj.isSelfCrossing(v);
  return 0;
}