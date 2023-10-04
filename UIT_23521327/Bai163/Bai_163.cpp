#include<iostream>
using namespace std;
void UocSoLeLonNhat(int);
int main()
{
	int n;
	cin >> n;
	UocSoLeLonNhat(n);
	return 0;
}
void UocSoLeLonNhat(int nn)
{
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	cout << t;
}