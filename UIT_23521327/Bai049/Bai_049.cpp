#include <iostream>
#include <iomanip>
using namespace std;
void UocSo(int);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	UocSo(n);
	return 0;
}
void UocSo(int nn)
{
	int i = 1;
	cout << "Uoc so cua n: ";
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << setw(4) << i;
		i++;
	}
}
