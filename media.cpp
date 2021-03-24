#include <iostream>
#include <iomanip>
using namespace std;

int main (){

 double A, B, C, D, MEDIA;
 cin >> A >> B >> C >> D;

    MEDIA=(2*A+3*B+5*C)/10;

    cout << "MÉDIA = " << fixed << setprecision(1) << MEDIA << endl;

 return 0;
}
