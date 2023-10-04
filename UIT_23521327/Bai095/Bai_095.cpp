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
	cout << S;
	return 0;
}
float Tinhcan(int nn)
{
	float S = 0;
	int i = nn;
	while (i > 0)
	{
		S = sqrt(i + S);
		i = i - 1;
	}
	return S;
}