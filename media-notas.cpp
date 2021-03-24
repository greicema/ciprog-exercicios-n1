#include <iostream>
using namespace std;

int main(){
float notas[10], soma=0;
int i;
for (i=0; i<10; i++){
 		cin >> notas[i];
 		soma = soma + notas[i];
}
cout << "A média é: " << soma / 10 << endl;
return 0;
}
