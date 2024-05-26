#include <iostream>
using namespace std;

int main(){
    cout << "Hey!" << endl;

    int i;
    int j = 0;
    int k = 4;

    for(i=1; i<11;i++){
        cout << "2 X" << i << "=" << 2*i << endl;
    }
    cout << "The final value of i = " << i;

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