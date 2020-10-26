#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
string pal;
int lgth;

int main()
{
   cout << "Podaj slowo: \n";
   cin >> pal;
   lgth = pal.length()-1;
   cout << endl;
	for (int i = 0; i < lgth; i++) {
	   if (pal[i] != pal[lgth - i]) {
			cout << "Slowo nie jest palindromem";
        	getch();
			return 0;
		}
	}
	cout << "Slowo jest palindromem\n";
	getch();
	return 0;
}
