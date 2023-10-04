#include <iostream>
using namespace std;
int Tich(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = Tich(n);
	cout << "Vay T(n)= " << T;
	return 0;
}
int Tich(int nn)
{
	int T = 0;
	int i = 1;
	while (i <= nn)
	{
		T = T + i * (i + 1) * (i + 2);
		i++;
	}
	return T;
}