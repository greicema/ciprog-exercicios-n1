#include <iostream>
using namespace std;

int main(){
int A[10];
int B[10];
int C[10];
  cout << "Insira 10 números para A\n";
  for (int i=0; i<10; i++){
 		cin >> A[i];
  }

  cout << "Insira 10 números para B\n";
  for (int i=0; i<10; i++){
 		cin >> B[i];
  }

  cout << "C: \n";
  for (int i=0; i<8; i++){
    C[i]=A[i]+B[i];
  cout << C[i] << endl;
  }
  
return 0;
}
