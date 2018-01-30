#include "Main.h"
#include <cstdio>
#include <cstdlib>

void UtworzCzar (const char* czar, Czary * poczatek, Czary * koniec)
{
	int dlugosc = 0;
	const char * tstr = czar;

	while(*tstr != '\0')
	{
		tstr++;
		dlugosc++;
	}

	*poczatek = (Czary)malloc(dlugosc);

	for(int i = 0 ; i < dlugosc ; i++)
		(*poczatek)[i] = czar[i];

	*koniec = *poczatek + dlugosc;

}

void RzucCzar (Czary Poczatek, Czary Koniec)
{
	while(Poczatek<Koniec)
	{
		printf("%c", *Poczatek);
		Poczatek++;
	}
	printf("%c", '\n');

}

void DodajCzar (KsiegaCzarow * ksiega, Czary Poczatek, Czary Koniec)
{

	printf("%s", "KSIEGA CZAROW\n");
	const char * tstr = *ksiega;


	int wczesniej=0;
	if((*ksiega)!=0)
	{
		while(*tstr != '\0')
		{
			tstr++;
			wczesniej++;
		}
	}

	int dlugosc = Koniec - Poczatek;

	KsiegaCzarow tmp = (KsiegaCzarow)realloc(*ksiega, wczesniej+dlugosc+3);//koniec linii i jeszcze 2razy \n

	for(int i=wczesniej; i<wczesniej+dlugosc ; i++)
		tmp[i] = Poczatek[i-wczesniej];

	tmp[wczesniej+dlugosc] = '\n';
	tmp[wczesniej+dlugosc+1] = '\n';
	tmp[wczesniej+dlugosc+2] = '\0';

	*ksiega = tmp;
}

void Czytaj(KsiegaCzarow * ksiega)
{
	printf("%s", *ksiega);
}

void SpalKsiege (KsiegaCzarow ksiega)
{
	free(ksiega);
}


void ZniszczCzar (Czary Poczatek, Czary Koniec)
{
	free(Poczatek);
	Koniec = 0;
}
