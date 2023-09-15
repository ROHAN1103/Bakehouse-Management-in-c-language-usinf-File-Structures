#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string.h>
#define max 75
#include <stdlib.h>
using namespace std;

struct snack
{
	int lays = 20, puff = 20, pastry = 20;
} k;
struct bev
{
	int pepsi = 20, sprite = 20, smooth = 20;
} i;

class bake
{
public:
	void bill();
	
} jsr;

void bake::bill()
{

	int q, w, r, t, y, u;
	if (k.lays > 9)
		q = 2;
	else
		q = 1;

	if (k.puff > 9)
		w = 2;
	else
		w = 1;

	if (k.pastry > 9)
		r = 2;
	else
		r = 1;

	if (i.pepsi > 9)
		t = 2;
	else
		t = 1;

	if (i.smooth > 9)
		y = 2;
	else
		y = 1;

	if (i.sprite > 9)
		u = 2;
	else
		u = 1;

	int sum = q + w + r + t + y + u + 51;
	fstream fp;
	fp.open("resource.txt", ios::out | ios::app);

	fp << "Lays->" << k.lays << "|Puff->" << k.puff << "|pastry->" << k.pastry << "|Pepsi->" << i.pepsi << "|Sprite->" << i.sprite << "|Smooth->" << i.smooth << "|$";
	for (int i = sum; i <= max; i++)
	{
		fp << "$";
		if (i == max)
		{
			fp << "\n";
		}
	}

	fp.close();
}
void renwe()
{
	int w, d, b, a, u, v, t;

	if (i.pepsi < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more pepsi");
		printf("\nwant to add pepsi now enter '1' to add else enter '0' :");
		scanf("%d", &w);
		if (w == 1)
		{
			printf("\nHow many pepsi do you want to add : ");
			scanf("%d", &d);
			i.pepsi = i.pepsi + d;
			printf("\npepsi are added & now total  bottles are %d", i.pepsi);
		}
		else
			printf("\nremaining pepsi are %d", i.pepsi);
	}

	if (i.sprite < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more sprite");
		printf("\nwant to add sprite now enter '1' to add else emter '0' :");
		scanf("%d", &w);
		if (w == 1)
		{
			printf("\nhow many sprite do you want to add :");
			scanf("%d", &b);
			i.sprite = i.sprite + b;
			printf("\nsprite are added & now total bottels are %d", i.sprite);
		}
		else
			printf("\nremaining sprite are %d", i.sprite);
	}

	if (i.smooth < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more smooth");
		printf("\nwant to add smooth now enter '1' to add else enter  '0' :");
		scanf("%d", &w);
		if (w == 1)
		{
			printf("\nhow many smooth you want to add:");
			scanf("%d", &a);
			i.smooth = i.smooth + a;
			printf("\nsmooth are added & now total bottels are %d", i.smooth);
		}
		else
			printf("\nremaining smooth are %d", i.smooth);
	}

	if (k.lays < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more lays  ");
		printf("\nwant to add lays now enter '1' to add else enter '0' :");
		scanf("%d", &w);
		if (w == 1)
		{
			printf("\nhow many lays you want to add:");
			scanf("%d", &u);
			k.lays = k.lays + u;
			printf("\n lays are added & now total packets are %d", k.lays);
		}
		else
			printf("\nremaining lays  are %d", k.lays);
	}

	if (k.puff < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more puff");
		printf("\nwant to add more puff now enter '1' to add else enter '0' :");
		scanf("%d", &w);
		if (w == 1)
		{
			printf("\nhow many puff you want to add:");
			scanf("%d", &v);
			k.puff = k.puff + v;
			printf(" \npuff's are added & now total puff's are %d", k.puff);
		}
		else
			printf("\nremaining puff are %d", k.puff);
	}

	if (k.pastry < 5)
	{
		printf(" \n\n######################################################\n\n");
		printf("\nAdd more pastry");
		printf("\nwant to add more pastry now enter '1' to add else enter '0' :");
		scanf("%d", &w);
		if (w == 1)
		{

			printf("\nhow many pastry you want to add:");
			scanf("%d", &t);
			k.pastry = k.pastry + t;
			printf("\n pastry's are added & now total pastry's are %d", k.pastry);
		}
		else
			printf("\nremaining pastry's are %d", k.pastry);
	}
	printf(" \n\n######################################################\n\n");
	printf("\nremaining items are\n");
	printf("\n Pepsi  :%d", i.pepsi);
	printf("\n sprite :%d", i.sprite);
	printf("\n smooth :%d", i.smooth);
	printf("\n lays   :%d", k.lays);
	printf("\n puff   :%d", k.puff);
	printf("\n pastry :%d", k.pastry);
	printf(" \n\n######################################################\n\n");
	printf("\n\nPress enter to continue..................\n\n");
	getch();
}
main()
{
	while (1)
	{

		int b, a, q, r, e, f, g, t, m, pay, on, dec;

		float amount;
	p:
		string buffer;
		amount = 0;
		b = 0;
		q = 0;
		r = 0;
		e = 0;
		f = 0;
		g = 0;
		pay = 0;
		char c[20] = {"code"}, s[20];
		system("cls");

		printf("\n###############################################################\n");
		printf("\n        *** WELCOME TO BAKE_HOUSE MANAGEMENT ***        \n");
		printf("\n###############################################################\n");
		printf("\t\t1.Owner\n");
		printf("\t\t2.Customer\n");
		printf("Enter your choice :");
		scanf("%d", &dec);
		if (dec == 1)
		{
			system("cls");
			printf("enter your Passcode to visit : ");
			scanf("%s", &s);
			if (strcmp(s, c) == 0)
				renwe();
			goto p;
		}
		if (dec == 2)
			;
		{
			system("cls");
			goto z;
		}
		if (dec != 1 && dec != 2)
		{
			printf("Invalid Choice\n");
		}

	z:
		system("cls");
		printf("\nWelcome to Bake-House Management System\n");
		printf(" \n######################################################\n\n");

		printf("\nEnter Your Choice as '1' for snack and '0' for baverages  :");

		scanf("%d", &a);
		system("cls");
		if (a == 1)
		{
			int x;
			printf("\nchoose the snack as\n ");
			printf("\n\n(1)Lays-(Rs 10 each)   ");
			printf("\n\n(2)Puff-(Rs 20 each)  ");
			printf("\n\n(3)pastry-(Rs 40 each)  \n\nEnter : ");
			scanf("%d", &x);
			switch (x)
			{
			case 1:
			{
				system("cls");
				printf("\nChoosen : Lays ");
				printf("\n\nenter the quantity:  ");
				scanf("%d", &b);
				if (b > k.lays)
				{
					printf("\ninsufficient items\n");
					printf("There are only %d left", k.lays);
				}
				else
				{
					amount = amount + 10 * b;
					k.lays = k.lays - b;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO : ");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input  ");
				break;
			}
			case 2:
			{
				system("cls");
				printf("\nChoosen :Puff   ");
				printf("\n\nenter the quantity : ");
				scanf("%d", &q);
				if (q > k.puff)
				{
					printf("\ninsufficient items\n  ");
					printf("There are only %d left", k.puff);
				}
				else
				{
					amount = amount + 20 * q;
					k.puff = k.puff - q;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO  :");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input  ");
				break;
			}
			case 3:
			{
				system("cls");
				printf("\nChoosen :pastry   ");
				printf("\n\nenter the quantity :  ");
				scanf("%d", &r);
				if (r > k.pastry)
				{
					printf("\ninsufficient items\n   ");
					printf("There are only %d left", k.pastry);
				}
				else
				{
					amount = amount + 40 * r;
					k.pastry = k.pastry - r;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO :  ");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input  ");
				break;
			}
			default:
			{
				printf("\n invalid input");
			}
			}
		}
		else if (a == 0)
		{
			int y;
			printf("\nchoose your choice as \n ");
			printf("\n\n(4)Sprite-(Rs 40 each)  ");
			printf("\n\n(5)Pepsi-(Rs 30 each)  ");
			printf("\n\n(6)Smooth-(Rs 20 each) \n\n Enter: ");

			scanf("%d", &y);
			switch (y)
			{
			case 4:
			{
				system("cls");
				printf("\nChoosen :Sprite  ");
				printf("\nenter the quantity:  ");
				scanf("%d", &e);
				if (e > i.sprite)
				{
					printf("\ninsufficient items\n  ");
					printf("There are only %d left", i.sprite);
				}
				else
				{
					amount = amount + 40 * e;
					i.sprite = i.sprite - e;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO  :");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input  ");
				break;
			}
			case 5:
			{
				system("cls");
				printf("\nChoosen :Pepsi");
				printf("\n\nenter the quantity:  ");
				scanf("%d", &f);
				if (f > i.pepsi)
				{
					printf("\ninsufficient items\n  ");
					printf("There are only %d left", i.pepsi);
				}
				else
				{
					amount = amount + 30 * f;
					i.pepsi = i.pepsi - f;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO  : ");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input");
				break;
			}
			case 6:
			{
				system("cls");
				printf("\nChoosen :Smooth  ");
				printf("\n\nenter the quantity : ");
				scanf("%d", &g);
				if (g > i.smooth)
				{
					printf("\ninsufficient items\n");
					printf("There are only %d left", i.smooth);
				}

				else
				{
					amount = amount + 20 * g;
					i.smooth = i.smooth - g;
				}
				printf("\nwant to purchase  more enter 1 for YES & 0 for NO  : ");
				scanf("%d", &t);
				if (t == 1)
					goto z;
				else if (t == 0)
					goto u;
				else
					printf("invalid input");
				break;
			default:
			{
				printf("\n invalid input");
			}
			}
			}
		}
		else
			printf("invalid input");
		system("cls");
	u:

		printf(" \n\n######################################################\n\n");
		printf("\nyou bought");
		printf("\n\nLays-%d", b);
		printf("\n\nPuff-%d", q);
		printf("\n\npastry-%d", r);
		printf("\n\nSprite-%d", e);
		printf("\n\nPepsi-%d", f);
		printf("\n\nSmooth-%d", g);
		printf("\n\npress enter to continue..........\n");
		int one, two, three, four, five, six;
		if (b > 10)
		{
			one = 2;
		}
		else
			one = 1;

		if (q > 10)
		{
			two = 2;
		}
		else
			two = 1;

		if (r > 10)
		{
			three = 2;
		}
		else
			three = 1;

		if (e > 10)
		{
			four = 2;
		}
		else
			four = 1;

		if (f > 10)
		{
			five = 2;
		}
		else
			five = 1;

		if (g > 10)
		{
			six = 2;
		}
		else
			six = 1;
		int sum = one + two + three + four + five + six + 51;
		fstream fp;
		fp.open("bill.txt", ios::out | ios::app);
		fp << "Lays->" << b << "|Puff->" << q << "|pastry->" << r << "|Sprite->" << r << "|Pepsi->" << e << "|Smooth->" << f << "|$";
		for (int z = sum; z <=max; z++)
		{
			fp << "$";
			if (z == max)
			{
				fp << "\n";
			}
		}

		fp.close();
		jsr.bill();
		getch();

		system("cls");
		pay = amount;
		float sales = sales + pay;
		int kl;
		printf("\nyour total amount is: %.2f", amount);
		printf("\n\nToday's sales is %.2f", sales);
		printf("\n\nDo you need Items Information enter '1' to visit or enter '0' : ");
		scanf("%d", &kl);
		if (kl == 1)
		{
			system("cls");
			printf("enter your Passcode to visit : ");
			scanf("%s", &s);
			if (strcmp(s, c) == 0)
				renwe();
			else
				printf("\n\ninvalid input of code");
		}
	}
}
