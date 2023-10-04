#include<iostream>
using namespace std;
void Dayso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Dayso(n);
	return 0;
}
void Dayso(int nn)
{
	int ahh, bhh;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh <<"," << bhh;
}