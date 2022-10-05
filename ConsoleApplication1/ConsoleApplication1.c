#include "Header.h"

int main()
{
	system("chcp 1251>nul");

	int a, b;
	printf("Сумма\n");
	printf(".................................\n");
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	printf("Результат: %d", Summ(a, b));

	printf("\n\nРазность\n");
	printf(".................................\n");
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	printf("Результат: %d", Raz(a, b));

	printf("\n\nВозведение в квадрат\n");
	printf(".................................\n");
	printf("Введите число: ");
	scanf_s("%d", &a);
	printf("Результат: %d", Kvadrat(a));

	printf("\n\nВозведение в куб\n");
	printf(".................................\n");
	printf("Введите число: ");
	scanf_s("%d", &a);
	printf("Результат: %d", Kyb(a));

	printf("\n\nОбъединение строк\n");
	printf(".................................\n");
	char* aa = "Спокойной ";
	char* bb = "ночи";
	printf("%s\n", associations(aa, bb));



}

char* associations(char* a, char* b)
{
	int l1 = 0, l2 = 0;
	while (a[l1] != '\0')
	{
		l1++;
	}
	while (a[l2] != '\0')
	{
		l2++;
	}
	char* c = calloc(l1 + l2, sizeof(char));
	for (int i = 0; i < l1; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < l2; i++) {
		c[i + l1] = b[i];
	}
	c[l1 + l2] = '\0';
	return c;
}
