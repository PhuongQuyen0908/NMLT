#include <iostream>
using namespace std;
float TinhdoF(float);
int main()
{
	float C;
	cout << "Nhap do C: ";
	cin >> C;
	float F = TinhdoF(C);
	cout << F;
	return 0;
}
float TinhdoF(float CC)
{
	float F= 9 * CC / 5 + 32;
	return F;
}