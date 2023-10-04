#include<iostream>
using namespace std;
void BoiChungNhoNhat(int, int);
int main()
{
	int a, b;
	cin >> a >> b;
	BoiChungNhoNhat(a, b);
	return 0;
}
void BoiChungNhoNhat(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else n = n - m;
	}
	float kq = abs(aa* bb) / (m + n);
	cout << kq;
}