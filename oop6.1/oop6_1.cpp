#include "Array.h"
Array DynamicArray(int arr[], const int size)
{
	Array DynArr = Array(size);
	for (int i = 0; i < size; i++)
		DynArr[i] = arr[i];
	return DynArr;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	int A = -50;
	int B = 50;

	const int size = 10;
	int a[size];
	for (int i = 0; i < size; i++)
		a[i] = A + rand() % int(B - A + 1);

	Array b = DynamicArray(a, size);
	b.Print(b);
	cout << " max = " << b.Max() << endl;
	cout << " min = " << b.Min() << endl;
	cout << " max - min = " << b.Norma() << endl;
	b.Sort(b.Norma());
	b.Print(b);

	return 0;
}