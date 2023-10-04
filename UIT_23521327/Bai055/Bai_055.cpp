#include <iostream>
using namespace std;
int TichUocSoLe(int);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int T = TichUocSoLe(n);
	cout <<"Tich uoc so le: "<< T;
	return 0;
}
int TichUocSoLe(int nn)
{
	int T = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			T = T * i;
		i = i + 2;
	}
	return T;
}