#include <iostream>
#include <string>

using namespace std;

int main() {
    double a, b, o;
    string zk, odp;

    do {
        // Pobieranie danych
        cout << "Podaj a: ";
        cin >> a;

        cout << "Podaj b: ";
        cin >> b;

        // Pobieranie znaku
        cout << "Znaki (+, -, *, /): ";
        cin >> zk;

        // Sprawdzanie poprawności znaku
        while (zk != "+" && zk != "-" && zk != "*" && zk != "/") {
            cout << "Nie ma takiego znaku. Wprowadz (+, -, *, /): ";
            cin >> zk;
        }

        // Sprawdzanie dzielenia przez zero
        while (zk == "/" && b == 0) {
            cout << "Nie dziel przez 0!" << endl;
            cout << "Podaj b ponownie: ";
            cin >> b;
        }

        // Obliczenia
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

        // Pytanie o kolejne działanie
        cout << "\nCzy chcesz wykonac kolejne dzialanie?" << endl;
        cout << "Tak -> T | Nie -> N: ";
        cin >> odp;

    } while (odp == "T" || odp == "t");

    return 0;
}
