#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	/*int bact = 1, i, time;
	cout << "������� �����";
	cin >> time;
	for (i = 1; i <= time; i++)
	{
		bact = bact * 2;
	}
	cout << bact << " �������� ��" <<time<< endl;


	int n=0, i=0, sum=0 ;
	do
	{
		cout << "������� ������������������ N ";
		cin >> n;
		if (n > 0)
		{
			sum += n;
			i++;
		}
	} while (n != 0);
	cout << "����� ������������������ = " << sum << endl;
	cout << "���������� ��������� ����� " << i << endl;
	system("pause");*/
	float stepend, rasxod, rost = 3, sum = 0, sumRasxod=0;
	int mes = 10;
	cout << "������� ��������� ";
	cin >> stepend;
	cout << "������� ������� ";
	cin >> rasxod;
	//sumRasxod = rasxod;
	for (int i = 1; i <= mes; i++)
	{
		if (i != 1)
		{
			rasxod = rasxod + ((rasxod * rost)/100);//%
			cout << rasxod << endl;
			sumRasxod += rasxod;
		}
		
	}
	cout.precision(20);

	cout << "��� �� ������� " << (sumRasxod - (stepend*mes)) <<
		" � ����� " << sumRasxod << endl;

	system("pause");
}