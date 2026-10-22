#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main() {
	//zadanie 1
	// 1) bêdzie równie¿ 10 uwzglêdniona
	for (int i = 5; i <= 7; i++) {
		cout << i << endl;
	}
	cout << endl << endl;
	for (int i = 5; i < 7; i++) {
		cout << i << endl;
	}
	cout << endl << endl;
	for (int i = 0; i <= 10; i = i + 1 + 1) {
		cout << i << endl;
	}
	cout << endl << endl;
	for (int i = 10; i > 0; i -= 1) {
		cout << i << endl;
	}

	//zadanie 2
	/*int fahr, celsius;
	int start, limit, krok;
	start = 0;
	limit = 200;
	krok = 20;
	fahr = start;
	while (fahr <= limit) {
		celsius = 5 * (fahr - 32) / 9;
		cout << fahr << "\t" << celsius << endl;
		fahr = fahr + krok;
	}*/

	//zadanie 3
	/*int fahr, celsius;
	int start, limit, krok;
	start = 0;
	limit = 200;
	krok = 20;
	fahr = start;
	for (fahr = 0; fahr <= limit; fahr = fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}*/
	// dziêki zmiennej float temperatura która zostanie podana moze byæ liczb¹ z przecinkiem 
	//zadanie 5 - program wyœwietli 0 
	//zadanie 6 
	int fahr, celsius;
	int start, limit, krok;
	cout << " Prosze podac wartosc start\n";
	cin >> start;
	cout << "Prosze podac wartosc limit\n";
	cin >> limit;
	cout << "Prosze podac wartosc krok\n";
	cin >> krok;
	fahr = start;
	for (fahr = 0; fahr <= limit; fahr = fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
	}
	// zadanie 7

	double liczba;
	for (int i = 0; i < 10; i++) {
		cout << "Prosze podac liczbe rzeczywista \n";
		cin >> liczba;
		if (liczba > 0) {
			cout << "Ta liczba jest dodatnia \n";
		}
	}
	//zadanie 8

	for (int a = 0; a <= 100; a++) {
		if (a % 2 == 0) {
			cout << a << endl;
		}
	}
	//zadanie 9
	int n;
	cout << "Prosze podac dzielnik\n";
	cin >> n;
	for (int b = 0; b <= 100; b++) {
		if (b % n == 0) {
			cout << b << endl;
		}
	}
	//zadanie 10 
	int dzielnik;
	int liczby = 0;
	cout << "Prosze podac dzielnik\n";
	cin >> dzielnik;
	for (int i = 0; i <= 100; i++) {
		if (i % dzielnik == 0) {
			liczby = liczby + 1;
		}
	} cout << "ilosc liczb podzielnych: " << liczby << endl;
	//zadanie 11 

	int a;
	int b;
	cout << "Prosze podac wartosc liczby calkowitej a\n";
	cin >> a;
	cout << "Prosze podac wartosc liczby calkowitej b\n";
	cin >> b;
	if (a < b) {
		for (int i = a; i <= b; i++) {
			if (i % 3 == 0) {
				cout << "Te liczby sa podzielne przez 3: " << i << endl;
			}
		}
	}
	else {
		for (int x = b; x <= a; x++) {
			if (x % 3 == 0) {
				cout << "Te liczby sa podzielne przez 3: " << x << endl;
			}
		}
	}

	//zadanie 12 
	int c;
	double liczbaa;
	double suma = 0;
	cout << "Prosze podac ilosc liczb z ktorych ma zostac policzona srednia arytmetyczna\n";
	cin >> c;
	for (int i = 1; i <= c; i++) {
		cout << "Prosze podac wartosc liczby\n";
		cin >> liczbaa;
		suma = suma + liczbaa;
	}
	double srednia = suma / c;
	cout << "Srednia arytmetyczna to: " << srednia << endl;

	//zadanie 13
	for (int l = 100; l >= 0; l--) {
		cout << l << endl;
	}

	//zadanie 14
	int schowek;
	int najmniejsza;
	for (int i = 1; i <= 3; i++) {
		cout << "Prosze podac liczbe calkowita\n";
		cin >> schowek;
		if (i == 1) { //jesli petla wykonywana jest po raz pierwszy to znaczy ze podana liczba jest najmniejsza
			najmniejsza = schowek;
		}
		else if (schowek < najmniejsza) { //jesli to ktores z kolei okrazenie petli to sprawdzamy czy nasza nowa liczba jest mniejsza niz pierwsza- jak tak to ona jest nowa najmniejsza a jak nie to nic sie nie dzieje i zostaje tamta
			najmniejsza = schowek;
		}
	}
	cout << "Najmniejsza liczba sposrod podanych to: " << najmniejsza << endl;

	//zadanie 15 
	int n_liczb;
	int m_najwieksza;
	cout << "Sposrod ilu liczb chcesz wylosowac liczbe?\n";
	cin >> n_liczb;
	cout << "Jaka jest najwiesza liczba sposrod ktorej losujemy?\n";
	cin >> m_najwieksza;
	srand(time(NULL));
	int losowa_liczba = (rand() % n_liczb);
	cout << "Wylosowana liczba to: " << losowa_liczba << endl; 
	
	//zadanie 16
	int szczesliwy_numerek; 
	int ile_razy=0; 
	cout << "Prosze podac szczesliwy numerek z przedzialu od 1 do 10\n";  
	cin >> szczesliwy_numerek; 
	cout << endl << endl;
	srand(time(NULL)); 
	for (int i = 1; i <= 10; i++) {
		int wylosowany_numerek = (rand() % 10) + 1;
		cout << wylosowany_numerek << endl;
		if (wylosowany_numerek == szczesliwy_numerek) {
			ile_razy = ile_razy + 1;
		}
	}
	cout << "Szczesliwy numerek zostal wylosowany " << ile_razy << " razy\n";
		return 0;
	}




		

					 

