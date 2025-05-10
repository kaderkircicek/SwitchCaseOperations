int main()
{
    char turu;
    int kisi,c1,b,d;
    float oran1,oran2;


    printf("i:Sehirici\nd:Sehirdisi\n");
    printf("Tur turunu giriniz:\n");
    scanf("%c", &turu);

    switch(turu)
    {
        case 'i':


        printf("Tura kac kisi katilacagini giriniz:\n");
        scanf("%d",&kisi);

        c1= kisi/48;
        b= kisi%48;
        d=48-b;
        oran1=kisi/48.0;
        oran2=kisi/((c1+1)*48.0);

        if(b==0)
        {
            printf("Bu tur icin %d tane otobuse ihtiyac vardir.\n",c1);
            printf("Turdaki bos koltuk sayisi 0'dir\n");
            printf("Turun doluluk orani 1'dir\n");
            printf("Karlilik derecesi:Cok karli\n");

        }


        else if( c1==0)
        {
            printf("Bu tur icin 1 tane otobuse ihtiyac vardir.\n");
            printf("Turdaki bos koltuk sayisi %d'dir\n", d);
            printf("Turun doluluk orani %f'dir\n",oran1);

               if ( oran1>0.9)
               {printf("Karlilik derecesi: Cok Karli");}

               else if ( oran1< 0.6)
              {printf("Karlilik derecesi:Zararli");}


                else
                {printf(" Karli");}

        }

       else
        {

           printf("Bu tur icin %d tane otobuse ihtiyac vardir.\n",c1+1);
            printf("Turdaki bos koltuk sayisi %d'dir.\n",d);
            printf("Turun doluluk orani %f'dir.\n",oran2);


             if (  oran2>0.9)
               {printf("Karlilik derecesi:Cok Karli\n");}

            else if ( oran2< 0.6)
            {printf("Karlilik derecesi:Zararli\n");}


            else
            {printf(" Karli\n");}

        }
            break;


        case 'd':


        printf("Tura kac kisi katilacagini giriniz:");
        scanf("%d",&kisi);

        c1= kisi/48;
        b= kisi%48;
        d=48-b;
        oran1=kisi/48.0;
        oran2=kisi/((c1+1)*48.0);

        if(b==0)
        {
            printf("Bu tur icin %d tane otobuse ihtiyac vardir.\n",c1);
            printf("Turdaki bos koltuk sayisi 0'dir\n");
            printf("Turun doluluk orani 1'dir\n");
            printf("Karlilik derecesi:Cok karli\n");

        }


        else if( c1==0)
        {
            printf("Bu tur icin 1 tane otobuse ihtiyac vardir.\n");
            printf("Turdaki bos koltuk sayisi %d'dir.\n", d);
            printf("Turun doluluk orani %f'dir.\n",oran1);

               if ( oran1>0.9)
               {printf("Karlilik derecesi: Cok Karli\n");}

               else if ( oran1< 0.7)
              {printf("Karlilik derecesi:Zararli\n");}


                else
                {printf(" Karli\n");}
        }

       else
          {

            printf("Bu tur icin %d tane otobuse ihtiyac vardir.\n",c1+1);
            printf("Turdaki bos koltuk sayisi %d'dir\n",d);
            printf("Turun doluluk orani %f'dir\n",oran2);

             if (  oran2>0.9)
               {printf("Karlilik derecesi: Karli\n");}

            else if ( oran2< 0.7)
            {printf("Karlilik derecesi:Zararli\n");}

             else
            {printf("Cok Karli\n");}

          }

            break;
    }




    return 0;
}
