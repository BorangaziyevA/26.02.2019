#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

void AddArray(int *&a, int &N)
{
	int *tmp = new int[N + 1];

	for (size_t i = 1; i < N + 1; i++)
	{
		tmp[i] = a[i - 1];
	}
	tmp[0] = 50;

	delete[] a;
	a = tmp;
	N++;

}

int* Minus(int *a, int N)
{
	int *tmp;
	int x = -1;


	for (size_t i = 0; i < N; i++)
	{
		if (a[i] < 0 )
		{
			x = i; break;
		}
	}
	if (x == -1)
	{
		AddArray(a, N);
		return a;
	}

	tmp = new int[N + 1];


	for (size_t i = 0; i < N; i++)
	{
		if (x == i)
		{
			tmp[x + 1] = 40;
			tmp[x] = a[i];
		}
		else if (i < x)
		{
			tmp[i] = a[i];
		}
		else
			tmp[i + 1] = a[i];
	}
	return tmp;
}

int* kratniy(int *a, int N, int &Size)
{
	int *tmp;
	int k = 0;

	for (size_t i = 0; i < N; i++)
	{
		if (a[i]%3 ==0)
		{
			k++;
		}

	}

	tmp = new int[k];
	k = 0;

	for (size_t i = 0; i < N; i++)
	{
		if (a[i]%3 == 0)
		{
			tmp[k++] = a[i];

		}

	}
	Size = k;
	return tmp;
}

int* remove0(int *a, int N, int &NewSize)
{
	int *tmp, k = 0;
	for (size_t i = 0; i < N; i++)
	{
		if (a[i] != 0)
		{
			k++;
		}

	}
	tmp = new int[k];
	k = 0;

	for (size_t i = 0; i < N; i++)
	{
		if (a[i]!=0)
		{
			tmp[k++] = a[i];
		}

	}
	NewSize = k;
	return tmp;

}

void IncreaseArray(int *&a, int &N)
{

	int *tmp = new int[N + 1];

	for (size_t i = 0; i < N + 1; i++)
	{
	tmp[i] = a[i];
	tmp[N] = 50;
	}

delete[] a;

a = tmp;
N++;

}

void PrintArray(const int *a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void FillArray(int *a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = -5 + rand() % 10;
	}	

}

void AlocateArray(int *&a, int n)
{
	a = new int[n];
}

int* Bolshe(int *a, int N, int &NewSize)
{
	int *tmp;
	int k = 0;

	for (size_t i = 0; i < N; i++)
	{
		if (a[i] <= 20)
		{
			k++;
		}

	}

	tmp = new int[k];
	k = 0;

	for (size_t i = 0; i < N; i++)
	{
		if (a[i] <= 20)
		{
			tmp[k++] = a[i];
		}

	}

	NewSize = k;
	return tmp;
}


int main()

{

	setlocale(LC_ALL, "");
	srand(time(NULL));

	int *a, *b;
	int N, M;
	int flag;

	do

	{
		cin >> N;

		AlocateArray(a, N);
		FillArray(a, N);
		PrintArray(a, N);
		b = Minus(a, N);
		PrintArray(b, N+1);



		cout << "Continue?1/0";

		cin >> flag;



	} while (flag == 1);



}

//cin >> N;
//a = new int[N];
//
//for (size_t i = 0; i < N; i++)
//{
//	a[i] = rand() % 10 + 1;
//	cout << a[i] << " ";
//}
//
//
//int *tmp = new int[N + 1];
//cout << endl;
//
//for (size_t i = 0; i < N + 1; i++)
//{
//	tmp[i] = a[i];
//	tmp[N] = 50;
//	cout << tmp[i] << " ";
//}
//
//delete[] a;
//
//a = tmp;
//N++;