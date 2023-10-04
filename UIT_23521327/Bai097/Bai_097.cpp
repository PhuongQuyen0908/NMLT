#include <iostream>
#include <cmath>
using namespace std;
float Tinhcan(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float S = Tinhcan(x, n);
	cout << "S(n)= " << S;
	return 0;
}
float Tinhcan(float xx, int nn)
{
	float S = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		S = sqrt(t + S);
		i++;
	}
	return S;
}