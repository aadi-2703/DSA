#include <iostream>
using namespace std;

//Pattern example:
/*
1
2 2
3 3 3
*/

void pattern(int n) {
  // code.
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout << i << " ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern(n);
}