#include <iostream>
#include <math.h>
using namespace std;

int main (){

 double peso, altura, imc;
  cout << "Peso:\n";
  cin >> peso;
    
  cout << "Altura:\n";
  cin >> altura;

   imc=(peso/pow(altura,2));
    
    if (imc < 18.5){
        cout << "Abaixo do peso\n";
      }

      else if (imc == 18.6 || imc <= 24.9){
        cout << "Peso ideal (parabéns)\n";
        }

      else if (imc == 25 || imc <= 29.9) {
          cout << "Levemente acima do peso\n";
          }
      
      else if (imc == 30 || imc <= 34.9){
        cout << "Obesidade grau I\n";
      }
      
      else if (imc == 35 || imc <= 39.9){
        cout << "Obesidade grau II (severa)";
      }
      
      if (imc>=40){
        cout << "Obesidade III (mórbida)";
      }

   return 0;
}
