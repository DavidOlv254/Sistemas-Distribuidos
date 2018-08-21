#include <iostream>
#include <math.h>
using namespace std;

int main(){
	const double PI = 3.1416;
	double radio;
	double res;

	cout << "Introduce el radio: " << endl;
	cin >> radio;
	res = PI * pow(radio,2);
	//PI = PI*radio;

	cout << "El area es: " << res << endl;
	return 0;
}
