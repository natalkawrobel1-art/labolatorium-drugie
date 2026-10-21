#include <iostream>
using namespace std; 
int main() {
	//zadanie 1
	// 1) bêdzie równie¿ 10 uwzglêdniona
	for (int i = 5; i <= 7; i++) {
		cout << i << endl;
	}
	for (int i = 5; i < 7; i++) {
		cout << i << endl;
	}
	for (int i = 0; i <= 10; i = i + 1 + 1) {
		cout << i << endl;
	}
	cout << endl << endl;
	for (int i = 10;  i > 0; i -= 1) {
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
	for (fahr = 0; fahr <= limit; fahr= fahr + krok) {
		float celsius = (5.0 / 9.0) * (fahr - 32.0); 
		cout << fahr << "\t" << celsius << endl;
	}*/
	// dziêki zmiennej float temperatura która zostanie podana moze byæ liczb¹ z przecinkiem 
	//zadanie 5 - program wyœwietli 0 
	//zadanie 6 
	/*int fahr, celsius;
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
	}*/
	// zadanie 7
	int a, b, c, d, e, f, g, h, j, k; 
	cout << "Prosze o podanie liczby rzeczywistej\n"; 
	cin >> a; 
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> b;
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> c; 
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> d; 
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> e;
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> f;
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> g;
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> h;
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> j; 
	cout << "Prosze o podanie liczby rzeczywistej\n";
	cin >> k; 

	
}


