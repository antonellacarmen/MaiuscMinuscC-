#include <iostream>
using namespace std;

int main() {
    char c;

    cout << "Inserisci un carattere: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "Il carattere inserito e' una lettera minuscola" << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "Il carattere inserito e' una lettera maiuscola" << endl;
    } else {
        cout << "Il carattere inserito non e' una lettera" << endl;
    }

    return 0;
}
