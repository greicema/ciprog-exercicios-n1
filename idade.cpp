#include <iostream>
#include <string>
using namespace std;

int main ( ){
  int opcao=1, idade, idadevelho=0, idadenovo=idade;
  string nome, nomevelho, nomenovo;
cout << "Digite nome e idade\n";

  while (opcao!=0){
    cin >> nome;
    cin >> idade;

  if (idade > idadevelho){
     idadevelho = idade;
     nomevelho = nome;
  }

  if (idade < idadenovo){
     idadenovo = idade;
     nomenovo = nome;
  }

  cin >> opcao;
}
cout << nomenovo << " " << idadenovo << endl;
cout << nomevelho << " " << idadevelho << endl; 

return 0;
}
