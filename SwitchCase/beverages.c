printf("Hello world!\n");

    int a,b,c,d,e,f;
    printf("1.Su\n2.Kola\n3.Cay\n4.Kurabiye\n5.Ayran\n");
    printf("Almak istediginiz urunun numarasini giriniz: ");
    scanf("%d",&a);

    switch(a){

    case 1:
    printf ("Suyunuzun boyutunu seciniz:\n");
    printf ("1.Buyuk\n2.Kucuk\n");
    scanf ("%d",&f);
        switch(f)
        {
         case 1:
         printf("Buyuk suyunuzu alabilirsiniz.");
         break;
         case 2:
         printf("Kucuk suyunuzu alabilirsiniz.");
         break;
         }
   break;

  case 2:
  printf("Kolanizin seker miktarini belirleyiniz.\n");
  printf("1.Sekerli\n2.Sekersiz\n");
  scanf("%d",&b);
        switch(b)
        {
         case 1:
         printf("Kolaniz sekerli olarak ayarlaniyor.");
         break;
         case 2:
         printf("Kolaniz sekersiz olarak ayarlaniyor.");
         break ;
        }
  break;

    case 3:
    printf("Cayinizin seker miktarini ayarlayiniz:\n");
    printf("1.Cok sekerli\n2.Orta sekerli\n3.Az sekerli\n4.Sekersiz\n");
    scanf("%d",&c);
       switch (c)
        {
         case 1:
         printf("Cayiniz cok sekerli olarak ayarlanicak.\n");
         break;
         case 2:
         printf("Cayiniz orta sekerli olarak ayarlanicak.\n");
         break;
         case 3:
         printf("Cayiniz az sekerli olarak ayarlanicak.\n");
         break;
         case 4:
         printf("Cayiniz sekersiz olarak ayarlanicak.\n");
         break;
       }

    printf("Simdi de cayinizin dem miktarini ayarlayiniz:\n");
    printf("1.Demli\n2.Normal\n3.Acik\n");
    scanf ("%d",&d);

        switch(d)
        {
         case 1:
         printf("Cayiniz demli olarak hazirlanicak.\n");
         break;
         case 2:
         printf("Cayinizin demi normal olarak hazirlanicak.\n");
         break;
         case 3:
         printf("Cayinizin demi acik olarak hazirlanicak.\n");
         break;
        }
    printf ("Cayiniz dem ve seker secimlerinize uygun olarak hazirlaniyor.\n");
    break;

    case 4:
    printf("Kurabiyenizi nasil istediginizi seciniz:\n");
    printf("1.Tatli\n2.Tuzlu\n");
    scanf("%d",&e);
         switch(e)
         {
          case 1:
          printf("Kurabiyeniz tatli olarak ayarlaniyor.\n");
          break;
          case 2:
          printf("Kurabiyeniz tuzlu olarak ayarlaniyor.\n");
          break;
        }
   break;


   case 5:
    printf("Ayraninizi nasil istediginizi seciniz:\n");
    printf("1.Kapali ayran\n2.Acik ayran\n");
    scanf("%d",&e);
        switch(e)
        {
         case 1:
         printf("Kapali ayraniniz hazirlaniyor\n");
         break;
         case 2:
         printf("Acik ayraniniz hazirlaniyor\n");
         break;
         }

  default:
  printf("Gecersiz yanit.");

}