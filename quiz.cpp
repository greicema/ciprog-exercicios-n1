#include <iostream>
using namespace std;

int main() {
  char resposta;
  int pontos = 0;

cout << "Quiz\n\n 1.Qual time o Neymar joga?\n a)Barcelona\n b)PSG\n c)Santos\n";
  cin >> resposta;

    if (resposta == 'b')
    pontos++; 

cout << "2.Quantas vezes o Brasil ganhou a Copa do Mundo?\n a)5\n b)6\n c)0\n";
  cin >> resposta;

    if (resposta == 'a')
    pontos++;

cout << "3.Quantas vezes o Vitória ganhou o Campeonato Brasileiro?\n a)5\n b)6\n c)0\n";
  cin >> resposta;

    if (resposta == 'c')
    pontos++;    

cout << "4.Quantas vezes o Bahia ganhou o Campeonato Brasileiro?\n a)5\n b)2\n c)0\n";
  cin >> resposta;

    if (resposta == 'b')
    pontos++;

cout << "5.Quantas vezes Marta foi eleita melhor jogadora do mundo pela FIFA?\n a)5\n b)6\n c)0\n";
  cin >> resposta;

    if (resposta == 'b')
    pontos++; 

cout << "Sua pontuação foi: " << pontos << endl;
if (pontos==5||pontos==4)
  cout << "\nMuito bem!\n";

if (pontos==3||pontos==2)
  cout << "\nBom\n";

if (pontos==1||pontos==0)
  cout << "\nVocê precisa estudar mais!\n";

return 0;
}
