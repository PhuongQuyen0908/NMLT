#include<iostream>
using namespace std;
int Tong(float);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int S = Tong(n);	
	cout << S;
	return 0;
}
int Tong(float nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i;
		i = i + 1;
	}
	return s;
}