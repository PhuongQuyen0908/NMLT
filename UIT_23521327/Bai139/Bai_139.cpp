#include<iostream>
using namespace std;
void GiaiPhuongTrinh(float, float);
int main()
{
	int a, b;
	cin >> a >> b;
	GiaiPhuongTrinh(a, b);
	return 0;
}
void GiaiPhuongTrinh(float aa, float bb)
{
	if (aa == 0)
		if (bb == 0)
			cout << "Vo so nghiem";
		else cout << "Vo nghiem";
	else
	{
		float x = (float)-bb / aa;
		cout << x;
	}
}