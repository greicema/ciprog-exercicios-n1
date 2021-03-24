#include <iostream>
using namespace std;

int main(){
int numeros[5], maior=0;
cout << "Insira 5 números\n";
  int i;
  for (i=0; i<5; i++){
 	  cin >> numeros[i];
  
  if (numeros[i] > maior){
    maior=numeros[i];
  }
 
}

cout << "Maior valor é " << maior << endl;

return 0;
}
