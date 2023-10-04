#include<iostream>
using namespace std;
void NamNhuan(int);
int main()
{
	int n;
	cout << "Nhap nam n: ";
	cin >> n;
	NamNhuan(n);
	return 0;
}
void NamNhuan(int nn)
{
	bool dk1 = (nn % 4 == 0) && (nn % 100 != 0);
	bool dk2 = nn % 400 == 0;
	if (dk1 == true || dk2 == true)
		cout << "La nam nhuan";
	else cout << "Khong la nam nhuan";
}