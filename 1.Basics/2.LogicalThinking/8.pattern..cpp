#include <iostream>
using namespace std;

//Pattern example:
/*
*****
 *** 
  *  
*/

void pattern(int n) {
  // code.
  int i,j,k;
  for (i = 0; i<n;i++){

    for(j=0;j<i;j++){
        cout << " ";
    }

    for(k=n+(n-1);k>(2*i);k--){
        cout << "*";
    }

    for(j=0;j<i;j++){
        cout << " ";
    }

    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern(n);
}