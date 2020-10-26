#include <iostream>
#include <conio.h>

using namespace std;
double tab1[2][3];
double tab2[2][3];

int main() {
    cout << "\nWprowadz ze spacja argumenty dla macierzy o wymiarach 2x3:\n\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3;j++) {
            cin >> tab1[i][j];
        }
    }
    cout << "\nWprowadz ze spacja argumenty dla macierzy drugiej o wymiarach 2x3:\n\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3;j++) {
            cin >> tab2[i][j];
        }
    }
	cout << "\nSuma macierzy:\n\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3;j++) {
            cout << tab1[i][j] + tab2[i][j] << "\t";
        }
        cout << endl;
    }
	getch();
    return 0;
}
