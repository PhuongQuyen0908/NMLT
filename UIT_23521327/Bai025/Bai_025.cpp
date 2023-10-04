#include <iostream>
using namespace std;
void hoanvi(int&, int&);
int main()
{
	// Nhap hai so nguyen a,b
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	hoanvi(a, b);
	cout << "So a va b sau khi hoan vi la: " << "a = " << a << "," << "b = " << b;
	return 0;
}
void hoanvi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;	
}

