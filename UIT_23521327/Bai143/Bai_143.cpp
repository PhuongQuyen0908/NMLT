#include<iostream>
using namespace std;
void KiemTra(int);
int main()
{
	int n;
	cin >> n;
	KiemTra(n);
	return 0;
}
void KiemTra(int nn)
{
	int s = 0;
	int i = 1;
	while (i <nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	if (s == nn)
		cout << "Hoan thien";
	else cout << "Khong hoan thien";
}