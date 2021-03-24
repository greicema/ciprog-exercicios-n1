#include <iostream>
using namespace std;

int main() {
 int i, contador=0;
 float numero, media, soma=0;

  cout << "Insira 6 números" << endl;
    for (i=0;i<6; i++){
      cin >> numero;
      if (numero>0){
         contador++;
         soma=soma+numero; 
      }
    }
    cout << contador << " valores positivos" << endl;

    media=soma/contador;
    cout << media << endl;   

    return 0;
}
