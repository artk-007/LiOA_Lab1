// L1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include < stdio.h >
#include <locale.h>
#include <stdlib.h>
#include <malloc.h> 
#include <windows.h>
#include <string.h>
int   main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("________________________Задание 1________________________\n ");

	int temp, n = 10, i = 0;
	int max, min;
	int a[10] = { 5,5,5,5,5,5,6,7,8,9 };
	if (a[0] > a[1]) {
		max = a[0];
		min = a[1];
	}
	else {
		max = a[1];
		min = a[0];
	}
	i = 2;
	while (i < n)
	{
		if (a[i] > max)
			max = a[i];
		else
			if (a[i] < min)
				min = a[i];
		i++;
	}
	i = 0;
	while (i < n) printf(" %d", a[i++]);
	printf("\n Разница меджу max и min  %d", max - min);
	printf("\n________________________Задание 2________________________ \n");
	printf("Инициализация массива случайными числами\n");
	int b[10];
	i = 0;
	while (i < n)
	{
		b[i] = rand() % 100;
		printf(" %d", b[i++]);
	}
	printf("\n________________________Задание 3________________________ \n");
	int* c;
	printf("Введите Кол-во эллементов \n");
	scanf("%d", &n);
	c = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		printf("Введите эллемент № %d \n", i);
		scanf("%d", &c[i]);
	}
	i = 0;
	while (i < n) printf(" %d", c[i++]);
	free(c);
	printf("\n________________________Задание 4________________________ \n");
	int d[3][3];
	int j;
	int s = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			d[i][j] = rand() % 100;
			printf(" %d", d[i][j]);
		}
		printf("\n");
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
		{
			s += d[i][j];
		}
		printf(" %d", s);
		s = 0;
	}
	printf("\n________________________Задание 5________________________ \n");
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	int p = 0;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3], poisk;

	for (i = 0; i < 3; i++)
	{
		printf("Введите фамилию студента\n"); scanf("%20s", stud[i].famil);
		printf("Введите имя студента %s\n", stud[i].famil); scanf("%20s", stud[i].name);
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
		printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name,
			stud[i].facult, stud[i].Nomzach);
	}
	printf("\nПоиск\n");
	printf("Введите фамилию студента\n"); scanf("%20s", poisk.famil);
	//printf("Введите имя студента\n"); scanf ("%20s",poisk.name);
	//printf("Введите название факультета студента\n"); scanf ("%20s",poisk.facult);
	//printf("Введите номер зачётной книжки студента\n"); scanf ("%d",&poisk.Nomzach);
	for (i = 0; i < 3; i++)
	{
		if (strcmp(stud[i].famil, poisk.famil) == 0)
		{
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			p++;
		}
	}
	if (p == 0)
		printf("такого студента нет");

	getchar();
	getchar();
}

