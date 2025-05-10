printf("Hello world!\n");
    char islem;
    int a,b,c;
    printf("a:Karenin alani ve cevresi\nb:Dikdortgenin alani ve cevresi\nc:Dik ucgenin alani ve cevresi\n");
    printf("Lutfen yapmak istediginiz islemin harfini giriniz \n");
    scanf("%c",&islem);

    switch(islem)
{
    case 'a' :
    printf("Karenin kenar uzunlugunu giriniz: ");
    scanf("%d",&a);
    printf("Karenin alani:%d'dir:\n",a*a);
    printf("Karenin cevresi:%d'dir.\n",4*a);
    break;



    case 'b':
    printf("Dikdortgenin kenar uzunluklarini giriniz:");
    scanf("%d" "%d",&a,&b);
    printf("Dikdortgenin alani:%d'dir.\n",a*b);
    printf("Dikdortgenin cevresi:%d'dir.\n",2*(a+b));
    break;


    case 'c':
    printf("Ucgenin dik kenarlarini giriniz: \n");
    scanf("%d" "%d" ,&a,&b);
    printf("Ucgenin hipotenus uzunlugunu giriniz: \n");
    scanf("%d",&c);
    printf("Ucgenin alani:%d'dir.\n",(a*b)/2);
    printf("Ucgenin cevresi:%d'dir.", a+b+c);
    break;

    default:
        printf("Gecersiz hesaplama girisi.");
}