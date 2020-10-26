#include <iostream>
#include <conio.h>

using namespace std;
int x, y, sumx =0, sumy=0;

int main() {
    cout << "Pierwsza liczba: ";
    cin >> x;
    cout << "\nDruga liczba: ";
    cin >> y;
	for (int j = 1; j < x; j++) {
        if (x % j == 0) {
            sumx += j;
        }
    }
	for (int i = 1; i < y; i++)	{
        if (y % i == 0) {
            sumy += i;       
        }
    }

    if (sumx == y + 1 && sumy == x + 1)
        cout << "\nLiczby " << x << " i " << y << " sa skojarzone\n";
    else
        cout << "\nLiczby " << x << " i " << y << " nie sa skojarzone\n";

    getch();
    return 0;
}
