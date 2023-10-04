#include<iostream>
using namespace std;
void KiemTraDang5m(int);
int main()
{
	int n;
	cin >> n;
	KiemTraDang5m(n);
	return 0;
}
void KiemTraDang5m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		cout << "La dang";
	else cout << "Khong la dang";
}