#include <iostream>
using namespace std;
int hangtram(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ht = hangtram(n);
	cout << "Chu so hang tram la: " << ht;
	return 0;
}
int hangtram(int nn)
{
	int ht = (nn % 1000) / 100;
	return ht;
}