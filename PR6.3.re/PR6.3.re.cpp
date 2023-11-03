#include <iostream>
using namespace std;
void Input(double* a, const int n, int index = 0)
{
	if (index < n) {
		cout << "a[" << index << "] ="; cin >> a[index];
		Input(a, n, index + 1);
	}
}

int main()
{
	int n;
	cout << "n="; cin >> n;
	double* a = new double[n];
	Input(a, n);
	cout << "Array: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	delete[] a;

	return 0;
}