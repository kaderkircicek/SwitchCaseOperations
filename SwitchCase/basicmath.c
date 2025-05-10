#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf ("Hello world!");

   int islem;
   int sayi1, sayi2;
   float sayi3,sayi4;



   printf("islemler:\n1:Toplama islemi\n2:Cikarma islemi\n3:Carpma islemi\n4:bolme islemi\n");
   printf("Lutfen yapmak istediginiz islemi seciniz:");
   scanf ("%d", &islem);


    switch(islem){

    case 1:
    printf ("Lutfen islem yapmak istediginiz sayilari seciniz:");
    scanf ("%d" "%d", &sayi1, &sayi2);
    printf ("isleminizin sonucu: %d'dir", sayi1+sayi2);
    break;

    case 2:
    printf ("Lutfen islem yapmak istediginiz sayilari seciniz:");
    scanf ("%d" "%d", &sayi1, &sayi2);
    printf ("isleminizin sonucu: %d'dir", sayi1-sayi2);
    break;

    case 3:
    printf ("Lutfen islem yapmak istediginiz sayilari seciniz:");
    scanf ("%d" "%d", &sayi1, &sayi2);
    printf ("isleminizin sonucu: %d'dir", sayi1*sayi2);
    break;

    case 4:
    printf ("Lutfen islem yapmak istediginiz sayilari seciniz:");
    scanf ("%f" "%f", &sayi3, &sayi4);
    if (sayi4==0)
    {printf("yapmak istediginiz islem tanimsiz");}
    else
    {printf ("isleminiz sonucu: %f'dir", sayi3/sayi4);}
    break;

    }
    return 0;
}
