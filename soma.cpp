#include <iostream>
using namespace std;

int main(){
int A[10], soma=0;

  int i;
  for (i=0; i<10; i++){
 		
    cin >> A[i];
 		soma = soma + A[i];
}
cout << "A soma é: " << soma << endl;
return 0;
}
