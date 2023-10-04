#include<iostream>
using namespace std;
void KiemTraDang2m(int);
int main()
{
	int n;
	cin >> n;
	KiemTraDang2m(n);
	return 0;
}
void KiemTraDang2m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "La dang";
	else
		cout << "Khong la dang";
}