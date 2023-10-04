#include <iostream>
#include <cmath>
using namespace std;
float Tong();
int main()
{
	float S = Tong();
	cout <<"S(n)= " << S;
	return 0;
}
float Tong()
{
	float S = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / (i * (i + 1));
		S = S + e;
		i++;
	}
	return S;
}