#include<iostream>
using namespace std;
void SoToanLe(int);
int main()
{
	int n;
	cin >> n;
	SoToanLe(n);
	return 0;
}
void SoToanLe(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan le";
	else cout << "Khong toan le";
}