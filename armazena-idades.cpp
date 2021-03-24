#include <iostream>
using namespace std;

int main(){
  int idades[10];
  int i;
  for (i=0; i<10; i++){
    cin >> idades  [i];
  }

  for (i=0; i<10; i++){
  cout << i << " - " << idades [i] << endl;
  }
return 0;
}
