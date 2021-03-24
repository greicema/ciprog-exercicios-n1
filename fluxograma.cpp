#include <iostream>
using namespace std;

int main() {
  double SALBASE, SALBRUTO, GRATIF, IR, SALLIQ;

  cout << "SALBASE\n";
    cin >> SALBASE;

  cout << "GRATIF\n";
    cin >> GRATIF;

      SALBRUTO=(SALBASE+GRATIF);
  cout << "SALBRUTO: " << SALBRUTO << endl;
    
    if (SALBRUTO<1000){
      IR=(SALBRUTO*15/100);
  cout << "IR: " << IR << endl;
    }
    
    else{
      IR=(SALBRUTO*20/100);
  cout << "IR: " << IR << endl;
    }

      SALLIQ=(SALBRUTO-IR);
  cout << "SALLIQ: " << SALLIQ << endl;

}
