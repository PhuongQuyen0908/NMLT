#include <iostream>
using namespace std;
float Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(n);
	cout << "Vay S(n)= " << S;
	return 0;
}
float Tong(int nn)
{
	float S = 0;
	int i = 1;
	while (i <= nn)
	{
		S = S + (float)1 / (i * (i + 1) * (i + 2) * (i + 3));
		i++;
	}
	return S;
}