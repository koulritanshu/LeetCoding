//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int answer(vector<vector<int>>&dp,vector<int> &arr, int ind, int sum){
        if(sum == 0) return 1;
        if(ind < 0) return 0;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        if(sum >= arr[ind] && answer(dp,arr,ind-1,sum-arr[ind])){
            return dp[ind][sum] = 1;
        }
        else if(answer(dp,arr,ind-1,sum)){
            return dp[ind][sum] = 1;
        }
        else{
            return dp[ind][sum] = 0;
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>> dp;
        vector<int> curr;
        for(int i=0;i<100010;i++) curr.push_back(-1);
        for(int i=0;i<110;i++){
            dp.push_back(curr);
        }
        return answer(dp,arr,arr.size()-1,sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends