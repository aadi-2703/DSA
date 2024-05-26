#include <iostream>
using namespace std;

int main(){
    cout << "Hey!" << endl;

    int age;
    // int marks;

    // The adult calculator
    // cin >> age;
    // if (age >= 18){
    //     cout << "You are an adult";
    // }
    // else{
    //     cout << "You are not an adult";
    // }


    // School grading system
    // cin>>marks;
    // if(marks < 25){
    //     cout << "F";
    // }
    // else if(marks <= 44){
    //     cout << "E";
    // }
    // else if(marks <= 49){
    //     cout << "D";
    // }
    // else if(marks <= 59){
    //     cout << "C";
    // }
    // else if(marks <= 79){
    //     cout << "B";
    // }
    // else if(marks <= 100){
    //     cout << "A";
    // }

    // Job Eligibilty
    cin >> age;
    if(age < 18){
        cout << "Not eligible for job!" << endl;
    }
    // else if(age <= 54){
    //     cout << "Eligible for job" << endl;
    // }
    // if(age <= 57){
    //     cout << "Eligible but retirement soon" << endl;
    // }
    else if(age <= 57){
        cout << "Eligible for job";
        if(age > 55){
            cout << ", but reirement sooon";
        }
    }
    else if(age > 57){
        cout << "Retirement time" << endl;
    }

    cout << endl;
    return 0;
}