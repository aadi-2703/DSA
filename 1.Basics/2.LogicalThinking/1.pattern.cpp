#include <iostream>
using namespace std;

//Pattern example:
/*
* * *
* * *
* * *
* * *
*/

void pattern(int n) {
  // code.
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      cout << "* ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern(n);
}