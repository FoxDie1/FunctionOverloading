#include "FillRand.h"
void FillRand(int arr[], const int n)
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
