#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int size, int i, int S)
{
	if (a[i] > 0 && a[i] % 2 != 0)
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}
int Number(int* a, const int size, int i, int N)
{
	if (a[i] > 0 && a[i] % 2 != 0)
		N++;
	if (i < size - 1)
		return Number(a, size, i + 1, N);
	else
		return N;
}
void Zero(int* a, const int size, int i)
{
	if (i < size - 1)
		Zero(a, size, i + 1);
	if (a[i] > 0 && a[i] % 2 != 0)
		a[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 23;
	int b[n];
	int Low = -25;
	int High = 80;
	Create(b, n, Low, High, 0);
	cout << "b[n] =";
	Print(b, n, 0);
	int S = Sum(b, n, 0, 0);
	int N = Number(b, n, 0, 0);
	cout << "S = " << S << endl;
	cout << "N = " << N << endl;
	Zero(b, n, 0);
	cout << "b[n] =";
	Print(b, n, 0);

	return 0;
}
