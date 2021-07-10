#include "STDAFX.h"
#include "Fillrand.h"
#include "Print.h"
#include "Statistics.h"


/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	Input(arr, n);
}

 void Input(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Введите значение элементов массива:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout << endl;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	PrintReverse(arr, n);
}
void PrintReverse (int arr[], const int n)
{
	for (int i =n-1; i >=0; i--)
	{
		cout <<  arr[i] << tab;
	}
	cout << endl;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	for (int i = 0; i < n; i++)
	{
		cout << "Введите значение элементов массива:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout<<"Summa:"<<Sum(arr, n);
}
double Sum(int arr[], const int n)
	{
		double Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum=Sum+arr[i];
		}
		return Sum;
	}*/

	/*void main()
	{
		setlocale(LC_ALL, "Russian");
		const int n = 5;
		int arr[n] = { 1, 2, 3,4,5 };
		for (int i = 0; i < n; i++)
		{
			cout << "Введите значение элементов массива:" << arr[i] << tab;
			cin >> arr[i];
		}
		cout<<Avg(arr, n);
	}
	double Avg(int arr[], const int n)
	{
		double sum = 0;
		double avg = 0;
		for (int i = 0; i <n; i++)
		{
			sum = sum + arr[i];
		}

		return avg=sum/n;
	}*/

	/*void main()
	{
		setlocale(LC_ALL, "Russian");
		const int n = 5;
		int arr[n] = { 1, 2, 3,4,5 };
		for (int i = 0; i < n; i++)
		{
			cout << "Введите значение элементов массива:" << arr[i] << tab;
			cin >> arr[i];
		}
		cout<<minValueIn(arr, n);
	}

	int minValueIn(int arr[], const int n)
	{
		int minValue = arr[0];
		if (minValue > arr[1])
			minValue = arr[1];
		if (minValue > arr[2])
			minValue = arr[2];
		if (minValue > arr[3])
			minValue = arr[3];
		if (minValue > arr[4])
			minValue = arr[4];

		return minValue;
	}*/

	/*void main()
	{
		setlocale(LC_ALL, "Russian");
		const int n = 5;
		int arr[n] = { 1, 2, 3,4,5 };
		for (int i = 0; i < n; i++)
		{
			cout << "Введите значение элементов массива:" << arr[i] << tab;
			cin >> arr[i];
		}
		cout << maxValueIn(arr, n);
	}

	int maxValueIn(int arr[], const int n)
	{
		int maxValue = arr[0];
		if (maxValue < arr[1])
			maxValue = arr[1];
		if (maxValue < arr[2])
			maxValue = arr[2];
		if (maxValue < arr[3])
			maxValue = arr[3];
		if (maxValue < arr[4])
			maxValue = arr[4];

		return maxValue;
	}*/

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Summa:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(arr, n) << endl;

	double d_arr[n];//double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "сумма элементов массива:" << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(d_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(d_arr, n) << endl;

	float f_arr[n];//float array
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "сумма элементов массива:" << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(f_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(f_arr, n) << endl;

	char c_arr[n] = { 40,31,7,25,23 };//char array
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "сумма элементов массива:" << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(c_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(c_arr, n) << endl;

	short s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "сумма элементов массива:" << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(s_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(s_arr, n) << endl;
	cout << "+++++++++++++ARRAYS 2D+++++++++++++++\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

