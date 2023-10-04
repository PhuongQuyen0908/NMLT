#include<iostream>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int T = Tich(n);
	cout << T;
	return 0;
}
int Tich(int nn)
{
	int T = 1;
	int i = 1;
	while (i <= nn)
	{
		T = T * i;
		i++;
	}
	return T;
}