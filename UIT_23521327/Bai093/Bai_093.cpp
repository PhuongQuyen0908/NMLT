#include <iostream>
#include <cmath>
using namespace std;
float Tinhcan(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tinhcan(n);
	cout <<"S(n)= " << s;
	return 0;
}
float Tinhcan(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = sqrt(2 + s);
		i++;
	}
	return s;
}