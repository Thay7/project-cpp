#include <iostream>
#include <math.h>
using namespace std;

int main () {

float x1, x2, y1, y2, d;

cout << "Informe os valores a seguir para calcular a distância entre os dois pontos: \n";
cout << "x1: ";
cin >> x1;
cout << "x2: ";
cin >> x2;
cout << "y1: ";
cin >> y1;
cout << "y2: ";
cin >> y2;

d = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

cout << "A distância entre os dois pontos é: " <<d;
}
