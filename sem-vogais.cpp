#include <iostream>
#include <string>
using namespace std;

int main() {
string palavra;
cout << "Insira uma palavra" << endl;
cin >> palavra;

for (int i = 0; i < palavra.size(); i++){
if ((palavra[i]!='a') && (palavra[i]!='e') && (palavra[i]!='i') && (palavra[i]!='o') && (palavra[i]!='u')){
  cout << palavra[i];
}
}
cout << endl;
return 0;
}
