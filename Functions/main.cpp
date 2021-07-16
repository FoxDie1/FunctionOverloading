#include<iostream>
#include <conio.h>
#include <algorithm> 
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
Написать функции:
??? Input(???);			//Позволяет ввести значения элементов массива с клавиатуры;
??? PrintReverse(???);	//Выводит массив на экран в обратном порядке - от последнего элемента к первому
??? Sum(???);			//Возвращает сумму элементов массива
??? Avg(???);			//Возвращает среднее арифметическое элементов массива
??? minValueIn(???);	//Возвращает минимальное значение из массива
??? maxValueIn(???);	//Возвращает максимальное значение из массива

Все эти функции можно писать прямо здесь, в этом же проекте.
-----------------------------------------------------------
*/

#define tab "\t"
int g_a;//(g_ -Global (Hungarian notation-венгерская нотация))глобальная пременная,ее видят все функции,ее может изменить любая функция.
	  //Поэтому использовать глобальные переменные не рекомендуется.
	  //по скольку не известно что в ней хранится.
	  //Но глобальые константы используются очень широко.Константу изменить никто не может,но все(функции)ее видят и могут прочитать.
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);//Function declaration-Обьявление функции
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

template<typename T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 100);
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 100);
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)//Function definition-Обьявление функции
{
	//определяет что делает функция
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
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)//Function definition-Обьявление функции
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
void Sort(T arr[ROWS][COLS],const int ROWS,const int COLS)//Пробовал сделать SORT,но он не работает...долго размышлял ,и полез в книги там был SWAP функция подмены...но не уверен что так должно быть.
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
	T Sum = 0;//ЛОкальная переменная шаблонного типа
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;//Возвращаемое значение шаблоного типа

}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS,const int COLS)
{
	T Sum = 0;//ЛОкальная переменная шаблонного типа
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j <COLS; j++)
		{
			Sum = Sum +arr[i][j];
		}
		return Sum;//Возвращаемое значение шаблоного типа
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

