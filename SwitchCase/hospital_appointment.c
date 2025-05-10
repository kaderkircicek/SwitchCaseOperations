char islem;
    int tlf,tc,e,b,sms;


    printf("Lutfen T.C kimlik numaranizi giriniz: ");
    scanf("%d",&tc);
    printf("Lutfen telefon numaranizi giriniz: ");
    scanf("%d",&tlf);

    printf("Sira numaranizin sms ile bilgilendirilmesini istiyor musunuz?\n");
    printf("1.Evet\n2.Hayir\n");
    scanf("%d",&sms);

    switch(sms)
    {
    case 1:
    printf("Islemleriniz bittikten sonra tarafiniza sms ile bilgi verilecektir.\n");
    break;

    case 2:
        printf("Isleminizin yapilmasi icin sms onayi gerekmektedir, iyi gunler dileriz.\n");
        return 0;
        break;
}






    printf("a:Dahiliye\nb:Kulak Burun Bogaz\nc:Goz Hastaliklari\nd:Ortapedi\ne:Acil\n");
    printf("Lutfen muane olmak istediginiz polikinligi seciniz:");
    scanf("%c",&islem);


    switch(islem)
    {

    case 'b':
    printf("1.Firat Yuksek\n2.Aslan Yalniz\n3.Esra Cilka\n");
    printf("Lutfen gitmek istediginiz doktoru seciniz:");
    scanf("%d",&e);

          switch(e)
        {
        case 1:
            printf ("Kulak burun bogaz bolumunde Firat Yuksek icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 2:
            printf (" Kulak burun bogaz bolumunde Aslan Yalniz icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 3:
            printf ("Kulak burun bogaz bolumunde Esra Cilka icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;
            default:
            printf("Gecersiz yanit.");}

            break;


         case 'a':
    printf("1.Ahmet Sayar\n2.Sule Kaya\n3.Mehmet Oduncu\n");
    printf("Lutfen gitmek istediginiz doktoru seciniz:");
    scanf("%d",&e);

          switch(e)
        {
        case 1:
            printf ("Dahiliye bolumunde Ahmet Sayar icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 2:
            printf (" Dahiliye bolumunde Sule Kaya icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 3:
            printf (" Dahiliye bolumunde Mehmet Oduncu icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;
       default:
            printf("Gecersiz yanit."); }

            break;



         case 'd':
    printf("1.Ayse Varol\n2.Ertan Surucu\n3.Elif Soyer\n");
    printf("Lutfen gitmek istediginiz doktoru seciniz:");
    scanf("%d",&e);

          switch(e)
        {
        case 1:
            printf ("Ortapedi bolumunde Ayse Varol icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 2:
            printf ("Ortapedi bolumunde Ertan Surucu icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 3:
            printf (" Ortapedi bolumunde Elif Soyer icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;
            default:
            printf("Gecersiz yanit.");}


            break;



         case 'c':
    printf("1.Sanet Kalkan\n2.Osnan Pala\n3.Ahmet Turk\n");
    printf("Lutfen gitmek istediginiz doktoru seciniz:");
    scanf("%d",&e);

          switch(e)
        {
        case 1:
            printf ("Goz hastaliklari bolumunde Samet Kalkan icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 2:
            printf ("Goz hastaliklari bolumunde Osman Pala icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;

         case 3:
            printf (" Goz hastalikları bolumunde Ahmet Turk icin randevunuz olusmustur, telefonunuza gelen sms ile sıra bilginizi ekrana giriniz.");
            scanf("%d",&b);
            if(b>0 && b>50)
            {printf("Muayene siraniz ogleden oncedir,lutfen buradan uzaklasmayiniz.");}
            else if (b>=50)
            {printf("Muayene siraniz ogleden sonradir,lutfen ogleden sonra tekrar geliniz simdi buarada kalabaliga sebep vermeyiniz.");}
            else
            {printf("Gecersiz yanit.");}
            break;
            default:
            printf("Gecersiz yanit.");}


            break;


         case 'e':
            printf("Acil girisi burdan degildir, kirmizi alana ilerleyiniz.");
            break;

           default:
            printf("Gecersiz yanit.");


    }
