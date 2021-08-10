#include "STDAFX.h"
#include "FillRand.h"
#include "Print.cpp"
#include "Statistics.cpp"


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
	const int n = 8;
	int arr[n] = { 1, 2, 3,4,5 };
	FillRand(arr, n);
	Sort(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Summa:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(arr, n) << endl;

	cout << "+++++++++++++ARRAYS 2D+++++++++++++++\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	PrintReverse(i_arr_2, ROWS, COLS);
	cout << "Summa:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое:" << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Миниммальное значение:" << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение:" << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	//cout << "Среднее арифметическое:" << Avg(d_arr_2, ROWS, COLS) << endl;

	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);

	short s_arr_2[ROWS][COLS];
	FillRand(s_arr_2, ROWS, COLS);
	Print(s_arr_2, ROWS, COLS);
}
