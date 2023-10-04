#include <iostream>
using namespace std;
float Tich(int, float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap so mu n: ";
	cin >> n;
	float T = Tich(n,x);
	cout << T;
	return 0;
}
float Tich(int nn, float xx)
{
	float T = 1;
	int i = 1;
	while (i <= nn)
	{
		T = T * xx;
		i++;
	}
	return T;
}