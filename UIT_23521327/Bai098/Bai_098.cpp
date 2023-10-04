#include <iostream>
#include <cmath>
using namespace std;
float Tinhcan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tinhcan(n);
	cout << "S(n)= " << S;
	return 0;
}
float Tinhcan(int nn)
{
	float S = 0;
	int i = 2;
	while (i <= nn)
	{
		S = sqrt(i + S);
		i++;
	}
	return S;
}