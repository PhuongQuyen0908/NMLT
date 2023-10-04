#include <iostream>
using namespace std;
float TinhdoC(float);
int main()
{
	float F;
	cout << "Nhap do F: ";
	cin >> F;
	float C = TinhdoC(F);
	cout << C;
	return 0;

}
float TinhdoC(float FF)
{
	float C = 5 * (FF- 32) / 9;
	return C;
}