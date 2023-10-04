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
	int i = 1;
	while (i <=  nn)
	{
		t = t * i;
		cout << setw(5) << t;
		i++;
	}
}
