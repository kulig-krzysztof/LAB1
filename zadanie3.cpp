#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;
double BMI, wzrost, waga;
string a;

int main() {
	cout << "Podaj mase ciala: ";
	cin >> waga;
	cout << "\nPodaj wzrost: ";
	cin >> wzrost;
	if (wzrost > 3)	wzrost /= 100;
	BMI = (waga) / (wzrost * wzrost);
	if (BMI < 16)	a = "wyglodzenie";
	if (BMI >= 16 && BMI < 17)	a = "wychudzenie";
	if (BMI >= 17 && BMI < 18.5)	a = "niedowaga";
	if (BMI >= 18.5 && BMI < 25)	a = "wartosc prawidlowa";
	if (BMI >= 25 && BMI < 30)	a = "nadwaga";
	if (BMI >= 30 && BMI < 35)	a = "I stopien otylosci";
	if (BMI >= 35 && BMI < 40)	a = "II stopien otylosci";
	if (BMI > 40)	a = "otylosc skrajna";
	cout << "\nTwoje BMI wynosi: " << setprecision(4) << BMI << " co jest rownowazne z  " << a;
	getch();
	return 0;
}
