#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int saldo, option, retiro, consignacion, pin, pinentrada, cuenta;

    pinentrada = 1234;
    saldo = 1000000;

    cout << "Bienvenido a Bancocos, por favor elija qué quiere hacer: \n";
    cout << "(1)\tRetirar\n";
    cout << "(2)\tConsignar\n";
    cout << "(3)\tConsultar saldo\n";
    cout << "(4)\tSalir\n\n";
    cin >> option;

    switch (option) {
        case 1: {
            cout << "\nIngrese su contraseña por favor: ";
            cin >> pin;

            if (pin == pinentrada) {
                cout << "\nIngrese el monto a retirar: ";
                cin >> retiro;
                if (saldo >= retiro) {
                    saldo -= retiro;
                    cout << "\nRetiro exitoso, su nuevo saldo es: " << saldo << endl;
                } else {
                    cout << "\nLo siento, no tienes suficientes fondos." << endl;
                }
            } else {
                cout << "\nSu contraseña no es la registrada en el sistema." << endl;
            }
            break;
        }

        case 2: {
            cout << "\nIngrese el monto a consignar: ";
            cin >> consignacion;

            if (consignacion >= 2000000) {
                cout << "\nPor favor acérquese a una de nuestras oficinas para consignar esa cantidad." << endl;
            } else {
                cout << "\nIngrese el numero de cuenta a la que va a consignar: ";
                cin >> cuenta;
                cout << "\nLa consignacion para la cuenta " << cuenta << " ha sido exitosa";
            }
            break;
        }

        case 3: {
            cout << "\nPor favor ingrese su contraseña: ";
            cin >> pin;

            if (pin == pinentrada) {
                cout << "\nSu saldo total es de: " << saldo << endl;
            } else {
                cout << "\nLo siento, su contraseña no corresponde a la registrada en el sistema." << endl;
            }
            break;
        }

        case 4: {
                system("clear");

            cout << "Gracias por usar nuestros servicios." << endl;


            break;
        }

        default:
            cout << "\nOpción inválida." << endl;
            break;
    }

    return 0;
}
