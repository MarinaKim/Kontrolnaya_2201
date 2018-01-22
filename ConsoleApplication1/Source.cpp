#include<stdio.h>
#include<math.h>
#include<iostream>
#include<stdint.h>
#include<time.h>

using namespace std;

void main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	do
	{
		cout << "������� ����� �������:";
		cin >> n;

		switch (n) {
			//1.	*��������, ���������, ������� ��������� ������� ����� �� 6 �������. ������������ ������ ������� ����� �� ������ �����.

		case 1: {

			int m[6] = { 0 }, k = 0;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 6; i++)
			{
				m[i] = 100000 + rand() % 600000;
				cout << m[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < 6; i++)
				k += m[i];
			cout << "������� ����� �� 6 �������: " << k << endl;

		}break;

			//2.	*�������� ���������, ������� ������� ���������� ������ � �������� �������
		case 2: {
			int m[6] = { 0 };

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 6; i++)
			{
				m[i] = 0 + rand() % 600;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (int i = 6; i >= 0; i--)
				cout << m[i] << endl;

		}break;

			//������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� ������������� (�������� � ����� ���� ������).
		case 3: {
			int m[5] = { 0 }, p = 0;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 5; i++)
			{
				m[i] = 0 + rand() % 600;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (int i = 0; i < 5; i++)
				p += m[i];
			cout << "�������� �������������: " << p << endl;

		}break;

			//������������ ������ ������� ����� �� ��� (12 �������). ���������� ���������� �����, � ������� �������
			//���� ����������� � �����, � ������� ������� ���� ����������.
		case 4: {
			int m[12] = { 0 }, i, min, max, index, index1;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = 0 + rand() % 600;
				cout << m[i] << "\t";
			}
			cout << endl;
			min = m[0];
			max = m[0];
			for (i = 0; i < 9; i++)
			{
				if (max < m[i])
				{
					max = m[i];
					index = i;
				}
				if (min > m[i])
				{
					min = m[i];
					index1 = i;
				}
			}
			cout << " �����, � ������� ������� ���� ����������� : " << index << endl;
			cout << "�����, � ������� ������� ���� ����������: " << index1 << endl;
		}break;
			//� ���������� �������, ��������� �� N ������������ ����� ���������:
			//�	����� ������������� ���������.
				//�	������������ ���������, ����������� ����� min � max ����������.
				//�	������������ ��������� � ������� ��������.
				//�	�����  ���������, ����������� ����� ������ � ��������� �������������� ����������.

		case 5: {
			int m[12] = { 0 }, i, sum=0, pr=1,k,min,max,index,index1;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = -10 + rand() % 40;
				cout << m[i] << "\t";
			}
			cout << endl;

			cout << "������� ����� �������: ";
			cin >> k;
			switch (k) {
			case 1: {
				for (i = 0; i < 12; i++)
				{
					if (m[i] < 0)
						sum += m[i];
				}
				cout << "����� ������������� ���������: " << sum << endl;
			}break;

			case 2: {
				min = m[0];
				max = m[0];
				for (i = 0; i < 12; i++)
				{
					if (max < m[i])
					{
						max = m[i];
						index = i;
					}
					if (min > m[i])
					{
						min = m[i];
						index1 = i;
					}
					if (index1 < index)
					{
						for (i = index1; i <= index; i++)
						{
							pr *= m[i];
						}
						cout << "������������ ���������, ����������� ����� min � max ����������: " << pr << endl;
					}
					else
					{
						for (i = index1; i <= index; i--)
						{
							pr *= m[i];
						}
						cout << "������������ ���������, ����������� ����� min � max ����������: " << pr << endl;
					}
				}

				
			}break;
			case 3: {
				for (i = 0; i < 12; i++)
				{
					if (i % 2 == 0)
					{
						pr*= m[i];
					}
					
				}
				cout << "������������ ��������� � ������� ��������: " << pr << endl;
			}break;
			case 4: {

			}break;
			}
			
		}break;
			//�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� ��������.
		case 6: {
			int m[12] = { 0 }, i;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = -10 + rand() % 40;
				cout << m[i] << "\t";
			}
			cout << endl;
			
			for (int i = 0; i < 11; i++)
			{
				for (int j = 11; j > i; j--)
				{
					if (m[j - 1] > m[j])
					{
						int l = m[j - 1];
						m[j - 1] = m[j];
						m[j] = l;
					}
				}
			}

			cout << "������ ����� ����������: " << endl;
			for (int i = 0; i <= 11; i++)
			{

				cout << m[i] << endl;
			}
		}break;

			//�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������
		case 7: {
			int m[12] = { 0 }, i;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = -10 + rand() % 40;
				cout << m[i] << "\t";
			}
			cout << endl;
			
			for (int i = 1; i < 12; i++)
			{
				int zn = m[i]; 
				int index = i;
				while ((index > 0) && (m[index - 1] > zn))
				{
					m[index] = m[index - 1];
					index--; 
				}
				m[index] = zn;
			}
			cout << "����� ����������: " << endl;
			for (int i = 0; i <= 11; i++)
			{
				cout << m[i] << endl;
			}

		}break;

			//�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������� ������.
		case 8: {
			int m[12] = { 0 }, i,min,l;

			cout << "�������� �������: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = -10 + rand() % 40;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (int i = 0; i <= 11; i++)
			{
				min = i;
				for (int j = i + 1; j < 12; j++)
				{
					if (m[j] < m[min])
						min = j;
				}

				l = m[i];
				m[i] = m[min];
				m[min] = l;
			}

			cout << "������ ����� ����������: " << endl;
			for (int i = 0; i <= 11; i++)
			{
				cout << m[i] << endl;
			}
		}break;

			//�������� ���������, ���������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������
			//�������� 10 ���������  ��������� �������: ������� ���������� ��������������� ��� ��������, ������� 0,
			//����� ��������������� ��� ��������, ������ 0, � ����� ��������������� ��� ��������, ������� 0.
		case 9: {
			int m[5] = { 0 }, k[5] = { 0 }, i, j, l[10] = { 0 };

			cout << "�������� �������: " << endl;
			for (i = 0; i < 5; i++)
			{
				m[i] = -10 + rand() % 30;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (i = 0; i < 5; i++)
			{
				k[i] = -10 + rand() % 30;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (i = 0; i <=4; i++)
				l[i] = m[i];

			for (i = 5; i <= 9; i++)
			{
				for (j = 0; j < 5; j++)
					l[i] = k[j];
			}

			cout << "����������� ������: " << endl;
			for (i = 0; i < 10; i++)
				cout << l[i] << "\t";
			cout << endl;


			for (i = 0; i < 10; i++)
			{
				for (j = 9; j >= 0; j--)
				{
					if (l[j - 1] < l[j])
					{
						int g = l[j - 1];
						l[j - 1] = l[j];
						l[j] = g;
					}
				}

			}

			cout << "����� ��������������: " << endl;
			for (i = 0; i <=9; i++)
				cout << l[i] << endl;

		}break;

			//�������� ���������, ������� ������������ ��������� ���������� ����� �� ����� � ������� ��� ����� � ������. ������� �������� �������, �������� �� ����� ���������.
		case 10: {
			int m[5] = { 0 }, i, j, k[5][3] = { {0}, {0}},l,l1,l0;

			cout << "�������� �������: " << endl;
			for (i = 0; i < 5; i++)
			{
				m[i] = 10 + rand() % 99;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (i = 0; i < 5; i++)
			{
				l0 = m[i];
				l = m[i] / 10;
				l1 = m[i] % 10;
				for (j = 0; j < 3; j++)
				{
					k[i][j+1] = l;
					k[i][j + 2] = l1;
				}
				cout << l0 <<"\t"<< l<<"\t"<< l1<< endl;
			}

		}break;

		case 11: {
			int m[5] = { 0 }, k[5] = { 0 }, i, j, l[5] = { 0 };

			cout << "�������� �������: " << endl;
			for (i = 0; i < 5; i++)
			{
				m[i] = -10 + rand() % 30;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (i = 0; i < 5; i++)
			{
				k[i] = -10 + rand() % 30;
				cout << m[i] << "\t";
			}
			cout << endl;
			for (i = 0; i < 5; i++)
			{
				l[i] = m[i] + k[i];
				cout << m[i]<<"\t"<<k[i]<<"\t"<<l[i] << endl;
			}
			
		}break;
		}
	} while (n > 0);
}