#include <iostream>
#include <math.h>
using namespace std;
// this piece of shit can succesfully find the nth root of a given number
int main (){
long double indice = 2, resultado, radicando = 9, chutebase = 0;
for (;resultado != radicando; chutebase += 0.01){
  resultado = chutebase;
  for (int i = 1; i < indice; i++){
        resultado *= chutebase;
      }
      if ((radicando - resultado) <= 0.02){
        break;
      }
    }
cout << chutebase;
}
