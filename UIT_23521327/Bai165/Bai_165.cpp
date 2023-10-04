#include<iostream>
using namespace std;
void TimK(int);
int main()
{
	int n;
	cin >> n;
	TimK(n);
	return 0;
}
void TimK(int nn)
{
	int t = 1;
	int k = 0;
	while (2 * t <= nn)
	{
		t = t * 2;
		k++;
	}
	cout << k;
}