#include<iostream>
using namespace std;
void Tangdan(float, float);
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	Tangdan(a, b);
	return 0;
}
void Tangdan(float aa, float bb)
{
	if (aa > bb)
	{
		float temp = aa;
		aa = bb;
		bb = temp;
	}
	cout <<"Thu tu tang dan la:" << aa <<"," << bb;
}