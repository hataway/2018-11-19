#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct priv
{
	char name[20];
	int birthday;
	char gen[20];
	int num;
};

int main()

{
	int n = 0;
	priv *p = 0;

	printf("�Է��� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	p = (priv *)calloc(n, sizeof(priv));

	for (int i = 0; i < n; i++)
	{
		printf("������ �Է� %d : ", i + 1);
		scanf("%s %d %s %d", p[i].name, &p[i].birthday, p[i].gen, &p[i].num);
	}

	printf("\n------------- �Է��� ���� -------------\n");

	printf("\n%-8s %-16s %-8s %-16s\n", "�̸�", "�������", "����", "��ȭ��ȣ");

	for (int i = 0; i < n; i++)
	{
		printf("%-8s %-16d %-8s 0%d\n", p[i].name, p[i].birthday, p[i].gen, p[i].num);
	}
	printf("\n");

	printf("------------- ������� ������ �������� -------------\n");

	printf("\n%-8s %-16s %-8s %-16s\n", "�̸�", "�������", "����", "��ȭ��ȣ");

	int a, b;
	struct priv temp;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (p[a].birthday < p[b].birthday)
			{
				temp = p[a];
				p[a] = p[b];
				p[b] = temp;
			}
		}
	}

	printf("\n");

	for (int i = 0; i < n; i++)
	{
		printf("%-8s %-16d %-8s 0%d\n", p[i].name, p[i].birthday, p[i].gen, p[i].num);
	}

	printf("\n");

	printf("------------- �̸� ������ �������� -------------\n");

	printf("\n%-8s %-16s %-8s %-16s\n", "�̸�", "�������", "����", "��ȭ��ȣ");

	struct priv temp2;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (strcmp(p[a].name, p[b].name) == 1)
			{
				temp2 = p[a];
				p[a] = p[b];
				p[b] = temp2;
			}

		}
	}

	printf("\n");


	for (int i = 0; i < n; i++)
	{
		printf("%-8s %-16d %-8s 0%d\n", p[i].name, p[i].birthday, p[i].gen, p[i].num);
	}

}