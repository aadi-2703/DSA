

#include <iostream>
using namespace std;

//Pattern example:
/*
1 2 3
1 2
1
*/

void pattern(int n) {
  // code.
  int i,j;
  for(i=1;i<=n;i++){
      for(j=n;j>=i;j--){
          cout << n-j+1 <<" ";
      }
      cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern(n);
}