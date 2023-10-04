#include <iostream>
using namespace std;
float Tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float T = Tich(n);
	cout << "Vay T(n)= " << T;
	return 0;
}
float Tich(int nn)
{
	float S = 1;
	int i = 1;
	while (i <= nn)
	{
		S = S * (1 + (float)1 / (i * i));
		i++;
	}
	return S;
}