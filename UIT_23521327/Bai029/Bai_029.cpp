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
	while (i <= nn)
	{
		S = S + (float)1 / i;
		i++;
	}
	return S;
}