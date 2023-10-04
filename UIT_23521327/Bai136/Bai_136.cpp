#include<iostream>
#include <iomanip>
using namespace std;
void NamNhuan(int, int);
int main()
{
	int x, y;
	cout << "Nhap x,y: ";
	cin >> x >> y;
	NamNhuan(x, y);
	return 0;
}
void NamNhuan(int xx, int yy)
{
	int n = xx;
	cout << "Cac nam nhuan la: ";
	while (n <= yy)
	{
		bool dk1 = (n % 4 == 0) && (n % 100 != 0);
		bool dk2 = (n % 400 == 0);
		if (dk1 == true || dk2 == true)
			cout << n << setw(6);
		n++;
	}
}