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
	cout <<"S(n)= " << S;
	return 0;
}
float Tinhcan(int nn)
{
	float S = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		S = pow(sqrt(t + S), (float)1 / (i + 1));
		i++;
	}
	return S;
}