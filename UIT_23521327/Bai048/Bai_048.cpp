#include <iostream>
using namespace std;
float Tich(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tich(x, n);
	cout << "Vay S(n)= " << S;
	return 0;
}
float Tich(float xx, int nn)
{
	float S = xx;
	int i = 1;
	while (i <= nn)
	{
		S = S * (xx + i);
		i++;
	}
	return S;
}