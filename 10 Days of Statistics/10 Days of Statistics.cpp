#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* x = new int[n];
	double mean = 0; int maxVal = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		mean += x[i];
		if (x[i] > maxVal)
			maxVal = x[i];
	}

	mean = mean / n;
	sort(x, x + n);

	int med = n / 2;
	double median = ((double)x[med] + (double)x[med - 1]) / 2.0;


	int* y = new int[maxVal + 1];

	for (int i = 0; i < maxVal + 1; i++) {
		y[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		y[x[i]]++;
	}

	int mode = 0;
	int val = 0;
	for (int i = 0; i < maxVal + 1; i++) {
		if (y[i] > val)
		{
			val = y[i]; mode = i;
		}
	}

	cout << mean << endl;
	cout << median << endl;
	cout << mode << endl;
	delete[]x;
	delete[]y;
	return 0;
}
