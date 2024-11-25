// Bai18_TinhSoThoc
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "Tinh so thoc tren ban co\n";
	int So0;
	double tongThoc = 0;
	cout << "Nhap so o :"; cin >> So0;
	
	for (int i = 0;i < So0; i++)
	{
		cout << "0 thu" << i + 1 << " co " << pow(2, i) << " thoc\n";
		tongThoc = tongThoc + pow(2, i);
		}
	cout << "Tong so thoc la: " << tongThoc;
	return 0;
	}








