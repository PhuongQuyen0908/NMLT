#include<iostream>
using namespace std;
void UocChungLonNhat(int, int);
int main()
{
	int a, b;
	cin >> a >> b;
	UocChungLonNhat(a, b);
	return 0;
}
void UocChungLonNhat(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	cout << m + n;
}