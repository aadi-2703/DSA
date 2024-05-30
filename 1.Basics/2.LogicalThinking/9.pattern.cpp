#include <iostream>
using namespace std;

//Pattern example:
/*
  *  
 *** 
*****
 ***
  *
*/

void pattern(int n) {
  // code.
  int i,j,k;
  for (i = 0; i<n;i++){

    for(j=0;j<(n-i-1);j++){
      cout << " ";
    }

    for(k=0;k<(2*i)+1;k++){
      cout << "*";
    }

    for(j=0;j<(n-i-1);j++){
      cout << " ";
    }

    cout << endl;
}


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
int i,j,k;

  