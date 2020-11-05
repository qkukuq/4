#include <stdio.h>
#include<locale.h>
#define n 15
int main()
{
	setlocale(LC_ALL, "Rus");
	float a[n], b;
	int i;
	printf("Введите элементы массива\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%f", &a[i]);
	}
	for (i = 0; i < n / 2; i++) {
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
	for (i = 0; i < n; i++) printf("%.3f ", a[i]);

}