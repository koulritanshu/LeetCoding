// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int evalRPN(vector<string> tokens) {
//         int answer = 0;
//         stack<int> st;
//         for(int i=0;i<tokens.size();i++){
//             if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i]=="/"){
//                 int second = st.top();
//                 st.pop();
//                 int first = st.top();
//                 st.pop();
//                 if(tokens[i] == "+"){
//                     int answer = first + second;
//                     st.push(answer);
//                 }
//                 else  if(tokens[i] == "-"){
//                     int answer = first - second;
//                     st.push(answer);
//                 }
//                 else if(tokens[i] == "/"){
//                     int answer = first/second;
//                     st.push(answer);
//                 }
//                 else if(tokens[i] == "*"){
//                     int answer = first*second;
//                     st.push(answer);
//                 }
//             }
//             else{
//                 int number = 0;
//                 for(int j=0;j<tokens[i].size();j++){
//                     if(tokens[i][j] == '0'){
//                         number = number*10 + 0;
//                     }
//                     else if(tokens[i][j] == '1'){
//                         number = number*10 + 1;
//                     }
//                     else if(tokens[i][j] == '2'){
//                         number = number*10 + 2;
//                     }
//                     else if(tokens[i][j] == '3'){
//                         number = number*10 + 3;
//                     }
//                     else if(tokens[i][j] == '4'){
//                         number = number*10 + 4;
//                     }
//                     else if(tokens[i][j] == '5'){
//                         number = number*10 + 5;
//                     }
//                     else if(tokens[i][j] == '6'){
//                         number = number*10 + 6;
//                     }
//                     else if(tokens[i][j] == '7'){
//                         number = number*10 + 7;
//                     }
//                     else if(tokens[i][j] == '8'){
//                         number = number*10 + 8;
//                     }
//                     else if(tokens[i][j] == '9'){
//                         number = number*10 + 9;
//                     }
//                 }
//                 if(tokens[i][0] == '-') number = number * -1;
//                 st.push(number);
//             }
//         }
//         return st.top();
//     }
// };

// USING STOL FUNCTION


// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int evalRPN(vector<string> tokens) {
//         int answer = 0;
//         stack<int> st;
//         for(int i=0;i<tokens.size();i++){
//             if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i]=="/"){
//                 int second = st.top();
//                 st.pop();
//                 int first = st.top();
//                 st.pop();
//                 if(tokens[i] == "+"){
//                     int answer = first + second;
//                     st.push(answer);
//                 }
//                 else  if(tokens[i] == "-"){
//                     int answer = first - second;
//                     st.push(answer);
//                 }
//                 else if(tokens[i] == "/"){
//                     int answer = first/second;
//                     st.push(answer);
//                 }
//                 else if(tokens[i] == "*"){
//                     int answer = first*second;
//                     st.push(answer);
//                 }
//             }
//             else{
//                 st.push(stol(tokens[i]));
//             }
//         }
//         return st.top();
//     }
// };