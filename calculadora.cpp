#include <iostream>
#include <math.h>
using namespace std;

int main() {
int numero1, numero2;
int opcao;

do{   
  cout << "===== Calculadora =====\n\n 1 - Soma\n 2 - Subtração\n 3 - multiplicação\n 4 - divisão\n 5 - potenciação\n 6 - Sair\n"; 

  cout << "Insira uma opção:" << endl;
  cin >> opcao;

 switch(opcao)
    {
      case 1:
        cout << "Insira um número: " << endl;
          cin >> numero1;
        cout << "Digite outro número: " << endl;
          cin >> numero2;
        cout << "A soma é: " << numero1+numero2 << endl;

           cout << "Deseja retornar?\n1.Sim\n2.Não\n";
           cin >> opcao;
      break;
     
      case 2:
        cout << "Insira um número: " << endl;
          cin >> numero1;
        cout << "Insira outro número: " << endl;
           cin >> numero2;
        cout << "A subtração é: " << numero1-numero2 << endl;

          cout << "Deseja retornar?\n1.Sim\n2.Não\n";
           cin >> opcao;
      break;
      
      case 3:
        cout << "Insira um número: " << endl;
          cin >> numero1;
        cout << "Insira outro número: " << endl;
          cin >> numero2;
        cout << "A multiplicação é: " << numero1*numero2 << endl;

          cout << "Deseja retornar?\n1.Sim\n2.Não\n";
          cin >> opcao;
      break;
      
      case 4:
        cout << "Insira um número: " << endl;
          cin >> numero1;
        cout << "Insira outro número: " << endl;
          cin >> numero2;
        cout << "A divisão é: " << numero1/numero2 << endl;

          cout << "Deseja retornar?\n1.Sim\n2.Não\n";
          cin >> opcao;
      break;
      
      case 5:
        cout << "Insira o valor da base: " << endl;
          cin >> numero1;
        cout << "Insira o valor do expoente: " << endl;
          cin >> numero2;
          cout << "A potência é: " << pow(numero1, numero2) << endl; 

          cout << "Deseja retornar?\n1.Sim\n2.Não\n";
           cin >> opcao;
      break;
    }

}while (opcao !=6 && opcao !=2);    

return 0;
}