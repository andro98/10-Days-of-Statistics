#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* x = new int[n];
	int* w = new int[n];
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int i = 0; i < n; i++)
		cin >> w[i];

	double num = 0.0;
	double dem = 0.0;

	for (int i = 0; i < n; i++) {
		num += ((double)x[i] * (double)w[i]);
		dem += (double)w[i];
	}

	cout << fixed;
	cout << setprecision(1);
	cout << num / dem << endl;
	delete[]x;
	delete[]w;
	return 0;
}