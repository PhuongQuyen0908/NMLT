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
	float ahh;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;
}