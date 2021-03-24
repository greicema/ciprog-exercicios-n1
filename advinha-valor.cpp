#include <iostream>
using namespace std;

int main(){
int vetor[10], posicao;
cout << "Insira 10 números\n";

for (int i=0; i<10; i++){
  cin >> vetor[i];
}

cout << "Insira Posição\n";
  cin >> posicao;

cout << "O número nesta posição é: " << vetor[posicao];

return 0;
}
