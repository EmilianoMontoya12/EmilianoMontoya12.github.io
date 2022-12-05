// ola.cpp : Este archivo contiene la función . La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main()
{
    int l1, l2, l3, b, h, a, p;
    cout << "Primer lado: " << "\n";
    cin >> l1;
    cout << "Segundo lado: " << "\n";
    cin >> l2;
    cout << "Tercer lado: " << "\n";
    cin >> l3;
    cout << " dame la base" << "\n";
    cin >> b;
    cout << " dame la altura" << "\n";
    cin >> h;

    if (l1 == l2 == l3)
        cout << "Es un triangulo Equilatero"<< "\n";
    else if (l1 == l2 || l2 == l3 || l3 == l1)
        cout << "Es un triangulo Isosceles"<<"\n";
    else
        cout << "Es un triangulo Escaleno""\n";
    a = (b * h) / 2;
    cout << a<< "de area"<<"\n";
    p = l1 + l2 + l3;
    cout << p<< "de perimetro"<<"\n";
    
    return 0;
}
