#include<iostream>
using namespace std;
void SoChinhPhuong(int);
int main()
{
	int n;
	cin >> n;
	SoChinhPhuong(n);
	return 0;
}
void SoChinhPhuong(int nn)
{
	int flag = 0;
	int i = 0;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "Chinh phuong";
	else cout << "Khong chinh phuong";
}