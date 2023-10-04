#include<iostream>
#include<cmath>
using namespace std;
void GiaiPhuongTrinh(float, float, float);
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	GiaiPhuongTrinh(a, b, c);
	return 0;
}
void GiaiPhuongTrinh(float aa, float bb, float cc)
{
	float delta = bb * bb - aa * aa * cc;
	if (delta <= 0)
		if (delta == 0)
		{
			float x0 = -bb / (2 * aa);
			cout << x0;
		}
		else cout << "Vo nghiem";
	else
	{
		float x1 = (-bb + sqrt(delta)) / 2 * aa;
		float x2 = (-bb - sqrt(delta)) / 2 * aa;
		cout << x1 << ", " << x2;
	}
}