#include <iostream>
#include<string>
using namespace std;

int main(){
    cout << "Hey!"<<endl;
    int  a = 10;
    long b = 100;
    long long c = 1000005000;

    float pi = 5.6;
    double pie = 5.38476523645786;

    string s; //Takes string until a space comes
    cin >> s;
    cout << s << endl;

    string str;
    getline(cin, str); //To take whole line string as input.(takes input unitl line break(Enter key is pressed, or new line input))
    cout << str << endl;

    char letter = 'A';
    cout << letter <<  endl;

    cout << endl;
    return 0;
}