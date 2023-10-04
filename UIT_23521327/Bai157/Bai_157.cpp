#include<iostream>
#include <iomanip>
using namespace std;
void DayGiaTri(int);
int main()
{
	int n;
	cin >> n;
	DayGiaTri(n);
	return 0;
}
void DayGiaTri(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << setw(6) << s;
		i++;
	}
}