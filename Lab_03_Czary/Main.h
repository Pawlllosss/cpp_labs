#ifndef MAINH
#define MAINH

typedef char* Czary;

typedef char* KsiegaCzarow;

void UtworzCzar (const char* czar, Czary * poczatek, Czary * koniec);

void RzucCzar (Czary Poczatek, Czary Koniec);

void DodajCzar (KsiegaCzarow * ksiega, Czary Poczatek, Czary Koniec);

void Czytaj(KsiegaCzarow * ksiega);

void SpalKsiege (KsiegaCzarow ksiega);

void ZniszczCzar (Czary Poczatek, Czary Koniec);
#endif
