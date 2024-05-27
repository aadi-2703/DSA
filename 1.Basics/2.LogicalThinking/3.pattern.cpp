#include <iostream>
using namespace std;

//Pattern example:
/*
1
1 2
1 2 3
*/

void pattern(int n) {
  // code.
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern(n);
}