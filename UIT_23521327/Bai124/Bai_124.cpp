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
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh <<"," << bhh;
}