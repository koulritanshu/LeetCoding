//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int dp[1000001];
    int func(int ind, int arr[]){
        if(ind < 0) return 0;
        // if(ind==0||ind==1) return arr[ind];
        if(dp[ind]!=-1) return dp[ind];
        int pick = func(ind-2,arr)+arr[ind];
        int notpick = func(ind-1,arr);
        return dp[ind] = max(pick,notpick);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    memset(dp,-1,sizeof(dp));
	    return max(func(n-1,arr),func(n-2,arr));
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends