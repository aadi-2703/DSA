#include <iostream>
using namespace std;

int main(){
    cout << "Hey!" << endl;

    int i;
    int j = 0;
    int k = 4;

    while(j < 6){
        cout << j <<endl;
        j++;
    }
    cout << "The final value of j = " << j << endl;

    do{
        cout << "Hello" <<k << endl;
        k++;
    }while(k < 3);
    cout << "The final value of k = " << k;

    cout << endl;
    return 0;
}