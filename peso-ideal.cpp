#include <iostream>
#include <math.h>
using namespace std;

int main (){

 float peso, altura, imc;
  cout << "Peso:\n";
  cin >> peso;
    
  cout << "Altura:\n";
  cin >> altura;

   imc=(peso/pow(altura,2));
    
      if (imc < 18.5){
        cout << "Abaixo do peso\n";
      }

      if (imc >= 18.5 && imc < 25){
        cout << "Peso ideal\n";
        }

      if (imc >= 25) {
          cout << "Acima do peso\n";
          }

   return 0;
}
