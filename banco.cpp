#include <iostream>
using namespace std;

int main() {
  int opcao;

  do{
      cout << "Menu\n Escolha sua opção: \n 1. Saque\n 2. Saldo\n 3. Sair\n Opção selecionada:\n"; 

      cin >> opcao;
      
      switch (opcao) { 
        case 1:
        cout << "Digite o valor do saque\n";
        cout << "Deseja voltar para o menu inicial?\n1.Sim\n2.Não\n";
        cin >> opcao;
        break;

        case 2:
        cout << "500,00\n";
         cout << "Deseja voltar para o menu inicial?\n1.Sim\n2.Não\n";
        cin >> opcao;
        break;

        case 3:
        break;

        default: 
        cout << "Digite uma opção válida\n";
      }
    }while (opcao !=3 && opcao !=2);
    
  return 0;

}
