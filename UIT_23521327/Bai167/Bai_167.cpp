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
	int s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k++;
		s = s + k;
	}
	cout << k;
}