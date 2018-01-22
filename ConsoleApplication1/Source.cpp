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
		cout << "введите номер задания:";
		cin >> n;

		switch (n) {
			//1.	*Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. Пользователь вводит прибыль фирмы за каждый месяц.

		case 1: {

			int m[6] = { 0 }, k = 0;

			cout << "Исходные массивы: " << endl;
			for (int i = 0; i < 6; i++)
			{
				m[i] = 100000 + rand() % 600000;
				cout << m[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < 6; i++)
				k += m[i];
			cout << "прибыль фирмы за 6 месяцев: " << k << endl;

		}break;

			//2.	*Написать программу, которая выводит одномерный массив в обратном порядке
		case 2: {
			int m[6] = { 0 };

			cout << "Исходные массивы: " << endl;
			for (int i = 0; i < 6; i++)
			{
				m[i] = 0 + rand() % 600;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (int i = 6; i >= 0; i--)
				cout << m[i] << endl;

		}break;

			//Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон).
		case 3: {
			int m[5] = { 0 }, p = 0;

			cout << "Исходные массивы: " << endl;
			for (int i = 0; i < 5; i++)
			{
				m[i] = 0 + rand() % 600;
				cout << m[i] << "\t";
			}
			cout << endl;

			for (int i = 0; i < 5; i++)
				p += m[i];
			cout << "периметр пятиугольника: " << p << endl;

		}break;

			//Пользователь вводит прибыль фирмы за год (12 месяцев). Необходимо определить месяц, в котором прибыль
			//была максимальна и месяц, в котором прибыль была минимальна.
		case 4: {
			int m[12] = { 0 }, i, min, max, index, index1;

			cout << "Исходные массивы: " << endl;
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
			cout << " месяц, в котором прибыль была максимальна : " << index << endl;
			cout << "месяц, в котором прибыль была минимальна: " << index1 << endl;
		}break;
			//В одномерном массиве, состоящем из N вещественных чисел вычислить:
			//•	Сумму отрицательных элементов.
				//•	Произведение элементов, находящихся между min и max элементами.
				//•	Произведение элементов с четными номерами.
				//•	Сумму  элементов, находящихся между первым и последним отрицательными элементами.

		case 5: {
			int m[12] = { 0 }, i, sum=0, pr=1,k,min,max,index,index1;

			cout << "Исходные массивы: " << endl;
			for (int i = 0; i < 12; i++)
			{
				m[i] = -10 + rand() % 40;
				cout << m[i] << "\t";
			}
			cout << endl;

			cout << "Введите пункт задания: ";
			cin >> k;
			switch (k) {
			case 1: {
				for (i = 0; i < 12; i++)
				{
					if (m[i] < 0)
						sum += m[i];
				}
				cout << "Сумму отрицательных элементов: " << sum << endl;
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
						cout << "Произведение элементов, находящихся между min и max элементами: " << pr << endl;
					}
					else
					{
						for (i = index1; i <= index; i--)
						{
							pr *= m[i];
						}
						cout << "Произведение элементов, находящихся между min и max элементами: " << pr << endl;
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
				cout << "Произведение элементов с четными номерами: " << pr << endl;
			}break;
			case 4: {

			}break;
			}
			
		}break;
			//Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырька.
		case 6: {
			int m[12] = { 0 }, i;

			cout << "Исходные массивы: " << endl;
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

			cout << "массив после сортировки: " << endl;
			for (int i = 0; i <= 11; i++)
			{

				cout << m[i] << endl;
			}
		}break;

			//Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок
		case 7: {
			int m[12] = { 0 }, i;

			cout << "Исходные массивы: " << endl;
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
			cout << "После сортировки: " << endl;
			for (int i = 0; i <= 11; i++)
			{
				cout << m[i] << endl;
			}

		}break;

			//Написать программу, выполняющую сортировку одномерного массива целых чисел методом быстрого поиска.
		case 8: {
			int m[12] = { 0 }, i,min,l;

			cout << "Исходные массивы: " << endl;
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

			cout << "массив после сортировки: " << endl;
			for (int i = 0; i <= 11; i++)
			{
				cout << m[i] << endl;
			}
		}break;

			//Написать программу, копирующую элементы 2-х массивов размером 5 элементов каждый в один массив
			//размером 10 элементов  следующим образом: сначала копируются последовательно все элементы, большие 0,
			//затем последовательно все элементы, равные 0, а затем последовательно все элементы, меньшие 0.
		case 9: {
			int m[5] = { 0 }, k[5] = { 0 }, i, j, l[10] = { 0 };

			cout << "Исходные массивы: " << endl;
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

			cout << "Совмещенный массив: " << endl;
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

			cout << "После преобразования: " << endl;
			for (i = 0; i <=9; i++)
				cout << l[i] << endl;

		}break;

			//Написать программу, которая осуществляет разбиение введенного числа на цифры и заносит эти цифры в массив. Вывести элементы массива, разделяя их двумя пробелами.
		case 10: {
			int m[5] = { 0 }, i, j, k[5][3] = { {0}, {0}},l,l1,l0;

			cout << "Исходный массивы: " << endl;
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

			cout << "Исходные массивы: " << endl;
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