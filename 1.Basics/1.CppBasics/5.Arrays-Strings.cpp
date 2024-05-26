#include <iostream>
using namespace std;

int main(){
    cout << "Hey!" << endl;

    // int arr[6];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3],arr[4] >> arr[5];
    // cout <<"Value at 3rd index is: " << arr[3] << endl;
    // arr[2] += 2;
    // cout << "Value at 4rd index + 2 is: " << arr[2];

    // 2D Array:
    // int arr[2][3];
    // arr[1][1] = 29; // Values not defined will have garbage value.
    // cout << arr[1][1];
    
    // Strings:
    string s = "Rakesh";
    cout << s[4] << endl;
    int len = s.size();
    cout << "Length of the string: " << len-1 << endl;

    cout << "The orginal string is: " << s << endl;
    s[2]='m';
    cout << "The modified string is: " << s;

    cout << endl;
    return 0;
}