#include<iostream>
using namespace std;
void Tangdan(float, float, float);
int main()
{
	float a, b, c;
	cout << "Nhap a,b,c:\n ";
	cin >> a >> b >> c;
	Tangdan(a, b, c);
	return 0;
}
void Tangdan(float aa, float bb, float cc)
{
	if (aa > bb)
	{
		float temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		float temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		float temp = bb;
		bb = cc;
		cc = temp;
	}
	cout <<"Thu tu tang dan la: "<< aa<<"," << bb << "," << cc;
}