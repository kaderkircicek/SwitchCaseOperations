 printf("Hello world!\n");
    int bakiye,islem,b,tc,sifre,g;
    bakiye=5000;


    printf("Lutfen sifenizi giriniz:");
    scanf("%d",&sifre);
    if(sifre != 4567)
    { printf("Yanlis sifre, lutfen tekrar deneyiniz.");}

    else
    {
    printf("Bakiyeniz 5000 turk lirasidir.\n");
    printf("1.Odeme Yapma\n2.Para Cekme\n3.Para Yatirma\n4.Havale yapma\n");
    printf("Lutfen yapmak istediginiz islemi seciniz:\n");
    scanf("%d",&islem);

switch(islem)
{

case 1 :
printf("1:Egitim Odemesi\n2:Kredi Odemesi\n3:Diger\n");
printf("Odeme turunuzu seciniz:");
scanf("%d",&g);
      switch(g)
      {
       case 1:
       printf("T.C kimlik numaranizi giriniz:\n");
       scanf("%d",&tc);
       printf("Odemek istediginiz miktari giriniz.\n");
       scanf("%d",&b);
       if( b > bakiye)
       {printf("Isleminiz gerceklestirilemiyor,yetersiz bakiye");}
       else
       {bakiye=bakiye-b;
        printf("Isleminiz gerceklesti,yeni bakiyeniz:%d'dir",bakiye);}
        break;


       case 2:
        printf("Kredi takip numaranizi giriniz:\n");
        scanf("%d",&tc);
        printf("Odemek istediginiz miktari giriniz.\n");
        scanf("%d",&b);
        if( b > bakiye)
        {printf("Isleminiz gerceklestirilemiyor,yetersiz bakiye");}
        else
        {bakiye=bakiye-b;
         printf("Isleminiz gerceklesti,yeni bakiyeniz:%d'dir",bakiye);}
         break;


       case 3:
        printf("Diger secenegindeki odeme turleri hesabınıza uygun degildir.");
        break;
        }
break;




case 2:
 printf("Cekmek istediginiz miktari giriniz:\n");
 scanf("%d",&b);
 if (b> bakiye)
  {printf("Isleminiz gerceklestirilemiyor,yetersiz bakiye");}
else
 {bakiye=bakiye-b ;
 printf("Isleminiz gerceklesti,yeni bakiyeniz:%d'dir",bakiye);}
 break;



case 3:
 printf("Yatirmak istediginiz miktari giriniz:\n");
 scanf("%d",&b);
 bakiye=bakiye+b;
 printf("Isleminiz gerceklesti,yeni bakiyeniz:%d'dir",bakiye);
 break;



case 4:
    printf("Havale yapmak istediginiz hesabin hesap numarasini giriniz:\n");
    scanf("%d",&tc);
    printf("Havale yapilacak tutari giriniz:\n");
    scanf("%d",&b);
    if (b> bakiye)
    {printf("Isleminiz yapilamiyor, yetersiz bakiye.");}
    else
    { bakiye= bakiye-b;
      printf("Yeni bakiyeniz %d'dir.",bakiye);}



default :
    printf("Gecersiz yanit.");

 }
 }

