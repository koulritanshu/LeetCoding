// APPROACH 1

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int n; cin >> n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         for(int j=0;j<n;j++){
//             swap(arr[i][j],arr[n-1-i][j]);
//         }
//     }
//     cout << "Printing values" << endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Printing Transpose of the above matrix" << endl;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// APPROACH 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }    
    // first calculate the transpose of the matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // now rotate each row
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j],arr[i][n-1-j]);
        }    
    }
    // printing the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}