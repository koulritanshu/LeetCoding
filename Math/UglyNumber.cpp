#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool isUgly(int n) {
        while(n){
            if(n%5==0) n/= 5;
            if(n%2==0) n/= 2;
            if(n%3==0) n/= 3;
            if(n==0 || n == 1) return true;
            else if((n%3!=0)&&(n%2!=0)&&(n%5!=0)) return false;
        }
        if(n==0) return false;
        return true;
    }
};

int main()
{
    Solution obj;
    cout << obj.isUgly(0);
    return 0;
}