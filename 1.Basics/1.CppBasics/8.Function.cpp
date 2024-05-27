#include <iostream>
using namespace std;

    /*
        Types of function:
        void - Does not return anything
        return -
        parametarized - 
        non-parametarized - 
    */

// void printNames(){  //void,non-paprameterized function.
//     cout << "Hey Rax";
// }

// void printNames(string name){  //Parametarized function.
//     cout << "Hey, " << name;
// }

// int sum(int num1, int num2){ //Return function
//     int num3 = num1 + num2;
//     return num3;
// }


// Pass by value, gets a copy of that value not the actual value.
void doSomething(int num){
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
}

// Pass by reference, edits the actual by taking its address, add '&' at starting of valriable_Name
void change(string &name){
    name[4] = 'a';
    cout << name << endl;
}

// array always goes with reference
void timepass( int arr[],int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] <<endl;
}

int main(){
    cout << "Hey!" << endl;

    // string name;
    // cin >> name;
    // printNames(name);

    // int num1,num2;
    // int res = sum(2,3); //Pass by value
    // cout << res;

    int num = 5;
    doSomething(num);
    cout <<"Inside main function: " << num << endl;

    string name = "rakesh";
    change(name);
    cout << "Inside main function: " << name << endl;

    int n =5;
    int arr[n];
    for(int i = 0; i < n; i = i+1){
        cin >> arr[i];
    }
    timepass(arr,n);
    cout << "Value inside int main: " << arr[0] <<endl;



    cout << endl;
    return 0;
}