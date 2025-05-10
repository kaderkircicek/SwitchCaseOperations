printf("Hello world!\n");
    int a;
    float b,c,d;
    printf("1.Toplama Islemi\n2.Cikarma Islemi\n3.Carpma Islemi\n4.Bolme Islemi\nLutfen yapmak istediginiz islemi seciniz: ");
    scanf ("%d",&a);

    switch(a)
    {
     case 1:
         printf("Islem yapmak istediginiz sayilari giriniz:\n");
         scanf("%f" "%f",&b,&c);
         d=b+c;
         printf("Isleminizin sonucu %f'dir.",d);
     break;

     case 2:
         printf("Islem yapmak istediginiz sayilari giriniz:\n");
         scanf("%f" "%f",&b,&c);
         d=b-c;
         printf("Isleminizin sonucu %f'dir.\n",d);
     break;

     case 3:
         printf("Islem yapmak istediginiz sayilari giriniz:\n");
         scanf("%f" "%f",&b,&c);
         d=b*c;
         printf("Isleminizin sonucu %f'dir.\n",d);
     break;

     case 4:
         printf("Islem yapmak istediginiz sayilari giriniz:\n");
         scanf("%f" "%f",&b,&c);

         if (c==0)
         {printf("Yaptiginiz islem tanimsizdir.\n");}
         else
        { d=b/c;
         printf("Isleminizin sonucu %f'dir.",d);}
     break;


     default :
        printf("Yapmak istediginiz islem tanimli degildir.");
}




