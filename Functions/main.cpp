#include<iostream>
#include <conio.h>
#include <algorithm> 
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
�������� �������:
??? Input(???);			//��������� ������ �������� ��������� ������� � ����������;
??? PrintReverse(???);	//������� ������ �� ����� � �������� ������� - �� ���������� �������� � �������
??? Sum(???);			//���������� ����� ��������� �������
??? Avg(???);			//���������� ������� �������������� ��������� �������
??? minValueIn(???);	//���������� ����������� �������� �� �������
??? maxValueIn(???);	//���������� ������������ �������� �� �������

��� ��� ������� ����� ������ ����� �����, � ���� �� �������.
-----------------------------------------------------------
*/

#define tab "\t"
int g_a;//(g_ -Global (Hungarian notation-���������� �������))���������� ���������,�� ����� ��� �������,�� ����� �������� ����� �������.
	  //������� ������������ ���������� ���������� �� �������������.
	  //�� ������� �� �������� ��� � ��� ��������.
	  //�� ��������� ��������� ������������ ����� ������.��������� �������� ����� �� �����,�� ���(�������)�� ����� � ����� ���������.
const int ROWS = 5;
const int COLS = 8;

template<typename T>
void FillRand(T arr[], const int n);

void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);

template<typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);//Function declaration-���������� �������
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void PrintReverse(T arr[], const int n);
template<typename T>
void PrintReverse(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T minValueIn(T arr[], const int n);
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T maxValueIn(T arr[], const int n);
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Sort(T arr[], const int n);
template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

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
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
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
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
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
			cout << "������� �������� ��������� �������:" << arr[i] << tab;
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
			cout << "������� �������� ��������� �������:" << arr[i] << tab;
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
			cout << "������� �������� ��������� �������:" << arr[i] << tab;
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
	cout << "������� ��������������:" << Avg(arr, n) << endl;
	cout << "������������ ��������:" << minValueIn(arr, n) << endl;
	cout << "������������ ��������:" << maxValueIn(arr, n) << endl;

	cout << "+++++++++++++ARRAYS 2D+++++++++++++++\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	PrintReverse(i_arr_2, ROWS, COLS);
	cout << "Summa:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� ��������������:" << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ ��������:" << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ ��������:" << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	//cout << "������� ��������������:" << Avg(d_arr_2, ROWS, COLS) << endl;

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

template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 100);
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 100);
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)//Function definition-���������� �������
{
	//���������� ��� ������ �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =double (rand() % 100)/10;
		}
		cout << endl;
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =float (rand() % 100)/10;
		}
		cout << endl;
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =char (rand() % 100);
		}
		cout << endl;
	}
}
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] =short (rand() % 100);
		}
		cout << endl;
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)//Function definition-���������� �������
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[],const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS],const int ROWS,const int COLS)//�������� ������� SORT,�� �� �� ��������...����� ��������� ,� ����� � ����� ��� ��� SWAP ������� �������...�� �� ������ ��� ��� ������ ����.
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

template<typename T>
void PrintReverse(T arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template <typename T>
void PrintReverse(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = ROWS-1; i >= 0; i--)
	{
		for (int j = 0; j< COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>
T Sum(T arr[], const int n)
{
	T Sum = 0;//��������� ���������� ���������� ����
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;//������������ �������� ��������� ����

}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS,const int COLS)
{
	T Sum = 0;//��������� ���������� ���������� ����
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j <COLS; j++)
		{
			Sum = Sum +arr[i][j];
		}
		return Sum;//������������ �������� ��������� ����
	}
	cout << endl;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double Sum = 0;
	double Avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
		return  Avg = Sum / ROWS;
	}
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS,const int COLS)
{
	T minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	}
	return minValue;

}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if ( arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS,const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

