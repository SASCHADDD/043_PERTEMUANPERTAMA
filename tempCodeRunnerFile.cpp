#include <iostream>
using namespace std;

int main()
{//begin
// numeric nLuas, nJejari
// display 'Masukan Jejari = '
// accept nJejari
// compute nLuass = 3.14 * r * r
// display 'Luasnya = ' + nLuas

float nLuas, nJejari;
cout << "Masukan Jejari = ";
cin >> nJejari;
nLuas = 3.14 * nJejari * nJejari;
cout << "Luasnya =" << nLuas << endl;

}