#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];

	double mean = 0.0;
	for (int i = 0; i < n; i++) {
		mean += x[i];
	}
	mean /= n;
	double num = 0;
	for (int i = 0; i < n; i++) {
		num += (pow(x[i] - mean, 2));
	}

	cout << fixed;
	cout << setprecision(1);
	cout << sqrt(num/n) << endl;
	delete[]x;
	return 0;
}