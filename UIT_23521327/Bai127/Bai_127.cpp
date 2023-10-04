#include<iostream>
using namespace std;
float GTNN(float, float);
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	float lc = GTNN(a, b);
	cout << "GTNN= " << lc;
	return 0;
}
float GTNN(float aa, float bb)
{
	float lc = aa;
	if (lc > bb)
		lc = bb;
	return lc;
}