#include"Statistics.h"

template<typename T>T Sum(T arr[], const int n)

{
	T Sum = 0;//ЛОкальная переменная шаблонного типа
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;//Возвращаемое значение шаблоного типа

}

template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)

{
	T Sum = 0;//ЛОкальная переменная шаблонного типа
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum = Sum + arr[i][j];
		}
		return Sum;//Возвращаемое значение шаблоного типа
	}
	cout << endl;
}


template<typename T>double Avg(T arr[], const int n)

{
	return (double)Sum(arr, n) / n;
}

template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)

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


template<typename T>T minValueIn(T arr[], const int n)

{
	T minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}

template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)

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


template<typename T>T maxValueIn(T arr[], const int n)

{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)

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



template<typename T>void Sort(T arr[], const int n)

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

template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)//Пробовал сделать SORT,но он не работает...долго размышлял ,и полез в книги там был SWAP функция подмены...но не уверен что так должно быть.

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
