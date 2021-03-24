#include <iostream>
using namespace std;

int main(){
int A[8];
int B[8];
  cout << "Insira 8 números para A\n";
  for (int i=0; i<8; i++){
 		cin >> A[i];
  }

  cout << "B: \n";
  for (int i=0; i<8; i++){
    B[i]=A[i]*2;
  cout << B[i] << endl;
  }
  
return 0;
}
