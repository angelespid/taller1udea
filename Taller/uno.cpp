#include <iostream>
using namespace std;

int main() {
    int A, B, residuo;
    
   
    cout << "Ingrese el valor de A: ";
    cin >> A;
    
    cout << "Ingrese el valor de B: ";
    cin >> B;
    
   
    residuo = A % B;
    
   
    cout << "El residuo de la division " << A << "/" << B << " es: " << residuo << endl;
    
    return 0;
}
