#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  float c, f;

cout << "Insira uma temperatura em Centígrados pra ser convertida em Fahrenheit: ";
  cin >> c;

    f = (9 * c + 160) / 5;

cout << "Temperatura em Fahrenheit: " << f << endl;

return 0;
}
