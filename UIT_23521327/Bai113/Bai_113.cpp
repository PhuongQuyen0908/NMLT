#include<iostream>
using namespace std;
float Dayso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float ahh = Dayso(n);
	cout << ahh;
	return 0;
}
float Dayso(int nn)
{
	int ahh;
	int at = 2;
	int i = 2;
	while (i <=nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}