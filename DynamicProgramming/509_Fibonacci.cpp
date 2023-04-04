// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int fib(int n) {
//         if(n<=1) return n;
//         int pre2 = 0;
//         int pre = 1;
//         for(int i=1;i<n;i++){
//             int curi = pre2 + pre;
//             pre2 = pre;
//             pre = curi;
//         } 
//         return pre;
//     }
// };