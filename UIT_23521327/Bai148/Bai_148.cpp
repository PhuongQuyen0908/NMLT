#include<iostream>
using namespace std;
void SoToanChan(int);
int main()
{
	int n;
	cin >> n;
	SoToanChan(n);
	return 0;
}
void SoToanChan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan chan";
	else cout << "Khong toan chan";
}