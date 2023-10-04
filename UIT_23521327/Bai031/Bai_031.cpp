#include<iostream>
using namespace std;
float Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tong(n);
	cout << S;
	return 0;
}
float Tong(int nn)
{
	float S = 0;
	int i = 1;
	while (i <= 2 * nn + 1)
	{
		S = S + (float)1 / i;
		i = i + 2;
	}
	return S;
}