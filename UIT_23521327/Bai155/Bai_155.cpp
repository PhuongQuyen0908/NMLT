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
	int t = 1;
	int i = 0;
	while (i <= nn)
	{
		t = t * 2;
		cout << setw(3) << t;
		i++;
	}
}