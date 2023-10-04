#include<iostream>
using namespace std;
void SoNguyenTo(int);
int main()
{
	int n;
	cin >> n;
	SoNguyenTo(n);
	return 0;
}
void SoNguyenTo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "Nguyen to";
	else cout << "Khong nguyen to";
}