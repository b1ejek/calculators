#include <iostream>
#include <string>

using namespace std;

int main() {
d1:
    double a, b, o;
    string zk,odp;

    // Pobieranie danych od użytkownika
    cout << "Podaj a: ";
    cin >> a;
d2:
    cout << "Podaj b: ";
    cin >> b;
dz:
    cout << "Znaki (+, -, *, /): ";
    cin >> zk;

    // Sprawdzanie poprawności znaku
    while (zk != "+" && zk != "-" && zk != "*" && zk != "/") {
        cout << "Nie ma takiego znaku. Wprowadz jeden z (+, -, *, /): ";
        cin >> zk;
    }

    // Sprawdzanie, czy b nie jest zerem w przypadku dzielenia
    if (zk == "/" && b == 0) {
        cout << "Nie dziel przez 0!" << endl;
        cout << "Podaj znak ponownie: ";
        cin >> zk;
        if (zk == "/" && b == 0) {
            cout << "Blad: Nie dziel przez 0!" << endl;
            goto d2;

        };
    };

    if (b < 0 && zk == "-"){
        o = a - b;
        b = b * -1;
        cout << a << " + " << b << " = " << o << endl;
        goto pyt;

    };

    // Wykonywanie obliczeń na podstawie znaku
    if (zk == "+") {
        o = a + b;
        cout << a << " + " << b << " = " << o << endl;

    } else if (zk == "-") {
        o = a - b;
        cout << a << " - " << b << " = " << o << endl;


    } else if (zk == "*") {
        o = a * b;
        cout << a << " * " << b << " = " << o << endl;

    } else if (zk == "/") {
        o = a / b;
        cout << a << " / " << b << " = " << o << endl;

    }

    pyt:
    cout << "Czy chcesz wykonac kolenje dzialanie?"<< endl;
    cout <<"Tak --> T || Nie --> N" << endl;
    cin >> odp;
    while(odp == "T" || odp == "t"){
                cout << "nie ma takiego wyboru" << endl;
                cout <<"Tak --> T || Nie --> N" << endl;
            };
    if(odp == "T" || odp == "t"){


        goto d1;
    };


    return 0;
};
