#include <iostream>
#include <string>
using namespace std;

int main() {
float nota1, nota2, nota3, media;
string nome;

for (int i=0; i<3; i++){
  cout << "Nome\n";
  getline(cin, nome);  

  cout << "Notas\n";  
 	cin >> nota1 >> nota2 >> nota3;
 	media=(nota1+nota2+nota3)/3;    

string linha;
getline(cin, linha);

cout << nome << " média " << media << endl;
}

return 0;
}
