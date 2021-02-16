#include <stdio.h>
#include <stdlib.h>

int i,j,x,z,Ai,aj,Gi,gj,kural,sayac1=0,sayac2=0,sira=1,kural2=1,kural3=1,d,yenisayac1=0,yenisayac2=0,yenisayac3=0;
char dizi[9][9],a=48,b=64,harfsatir2,harfsatir1;

oyunuBitiricekMi(int kural3)
{
    for(i=0;i<=8;i++)
        {
            for(j=0;j<=8;j++)
                {
                    d=dizi[i][j];
                    if(d=='I' || d=='Z' || d=='O' || d=='Y')
                        sayac1++;
                    if(d=='X' || d=='B' || d=='T' || d=='L')
                        sayac2++;
                }

        }
    for(i=0;i<=8;i++)
        {
            for(j=0;j<=8;j++)
                {
                    d=dizi[i][j];
                    if(d=='O')
                        yenisayac1++;
                    if(d=='L')
                        yenisayac2++;
                    if(d=='.')
                        yenisayac3++;
                }

        }

    if(yenisayac1<=2 && yenisayac2<=2 && yenisayac3>=60)
    kural3=4;

    if(sayac1==0)
    kural3=3;
    if(sayac2==0)
    kural3=2;


    return kural3;
}

void oyunSahnesiniAta()
{
    for(i=1;i<=2;i++)
        for(j=0;j<=8;j++)
            dizi[i][j]='I';

    for(i=3;i<=7;i++)
        for(j=0;j<=8;j++)
            dizi[i][j]='.';

    for(i=7;i<=8;i++)
        for(j=0;j<=8;j++)
            dizi[i][j]='X';

    for(i=0;i<9;i++)
        for(j=0;j<1;j++)
            {
            dizi[i][j]=a;
            a++;
            }

    for(i=0;i<1;i++)
        for(j=0;j<9;j++)
            {
            dizi[i][j]=b;
            b++;
            }
////////////////////////////////Ozel taslarin atamalari
    dizi[0][0]=' ';
    dizi[1][2]='Z';
    dizi[1][7]='Z';
    dizi[8][2]='T';
    dizi[8][7]='T';
    dizi[1][1]='Y';
    dizi[1][3]='Y';
    dizi[1][8]='Y';
    dizi[1][6]='Y';
    dizi[1][4]='O';
    dizi[1][5]='O';
    dizi[8][1]='B';
    dizi[8][3]='B';
    dizi[8][8]='B';
    dizi[8][6]='B';
    dizi[8][4]='L';
    dizi[8][5]='L';
////////////////////////////////Ozel taslarin atamalari

}

void oyunSahnesiniCizdir()/////////Sahneyi ekrana yazan fonksiyon
{
    system("cls");

            for(i=0;i<9;i++)
        {

            for(j=0;j<=8;j++)
                printf("  %c  ",dizi[i][j]);

            printf("\n      _____________________________________\n");
        }
}


int degerleriDegis(int Ai, int aj, int Gi, int gj)//Tasin oynadigi yeri kontrol edip tas yenilmesini
{                                                 //ya da sadece hareket etmesini kontrol eden yer.

    x=dizi[Ai][aj];
    z=dizi[Gi][gj];

    if(dizi[Ai][aj]=='I' && dizi[Gi][gj]=='X')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

     else if(dizi[Ai][aj]=='I' && dizi[Gi][gj]=='T')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

     else if(dizi[Ai][aj]=='I' && dizi[Gi][gj]=='B')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

     else if(dizi[Ai][aj]=='I' && dizi[Gi][gj]=='L')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

    else if(dizi[Ai][aj]=='X' && dizi[Gi][gj]=='I')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }
    else if(dizi[Ai][aj]=='X' && dizi[Gi][gj]=='Z')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


    else if(dizi[Ai][aj]=='X' && dizi[Gi][gj]=='Y')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


    else if(dizi[Ai][aj]=='X' && dizi[Gi][gj]=='O')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }



    else if(dizi[Ai][aj]=='Z' && dizi[Gi][gj]=='X')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

    else if(dizi[Ai][aj]=='Z' && dizi[Gi][gj]=='T')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


    else if(dizi[Ai][aj]=='Z' && dizi[Gi][gj]=='B')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

    else if(dizi[Ai][aj]=='Z' && dizi[Gi][gj]=='L')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }




    else if(dizi[Ai][aj]=='T' && dizi[Gi][gj]=='I')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

    else if(dizi[Ai][aj]=='T' && dizi[Gi][gj]=='Z')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


    else if(dizi[Ai][aj]=='T' && dizi[Gi][gj]=='Y')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

    else if(dizi[Ai][aj]=='T' && dizi[Gi][gj]=='O')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


     else if(dizi[Ai][aj]=='O' && dizi[Gi][gj]=='X')
        {
                if(Ai-Gi<=3 && Ai-Gi>=-3)
                    {
                        if(aj-gj<=3 && aj-gj>=-3)


                            dizi[Ai][aj]=z;
                            dizi[Gi][gj]=x;

                    }

                else
                    {

                    dizi[Ai][aj]='.';
                    dizi[Gi][gj]=x;

                    }



        }


    else if(dizi[Ai][aj]=='O' && dizi[Gi][gj]=='T')
        {
                if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }


     else if(dizi[Ai][aj]=='O' && dizi[Gi][gj]=='B')
        {
              if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }



        else if(dizi[Ai][aj]=='O' && dizi[Gi][gj]=='L')
        {
                if(Ai-Gi<=2 || aj-gj<=2 || aj-gj>=-2 || Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }


       else if(dizi[Ai][aj]=='Y' && dizi[Gi][gj]=='L')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

       else if(dizi[Ai][aj]=='Y' && dizi[Gi][gj]=='X')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }



        else if(dizi[Ai][aj]=='Y' && dizi[Gi][gj]=='B')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }



        else if(dizi[Ai][aj]=='Y' && dizi[Gi][gj]=='L')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


        else if(dizi[Ai][aj]=='B' && dizi[Gi][gj]=='I')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }


        else if(dizi[Ai][aj]=='B' && dizi[Gi][gj]=='Z')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

        else if(dizi[Ai][aj]=='B' && dizi[Gi][gj]=='Y')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

        else if(dizi[Ai][aj]=='B' && dizi[Gi][gj]=='O')
        {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
        }

         else if(dizi[Ai][aj]=='L' && dizi[Gi][gj]=='O')
        {
                if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }



        else if(dizi[Ai][aj]=='L' && dizi[Gi][gj]=='I')
        {
                if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }

        else if(dizi[Ai][aj]=='L' && dizi[Gi][gj]=='Y')
        {
                if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }

        else if(dizi[Ai][aj]=='L' && dizi[Gi][gj]=='Z')
        {
                if(Ai-Gi<=2 && aj-gj<=2 && aj-gj>=-2 && Ai-Gi>=-2)
            {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
            }
                else
            {
                dizi[Ai][aj]='.';
                dizi[Gi][gj]=x;
            }
        }

    else if(dizi[Ai][aj]>dizi[Gi][gj] || dizi[Ai][aj]<dizi[Gi][gj])
        {
                dizi[Ai][aj]=z;
                dizi[Gi][gj]=x;
        }
}

int kontrolEt(int Ai, int aj, int Gi, int gj)//Secilen tasin ne olduguna bakip gidecegi yeri
{                                            //kontrol eden ve gidip gidemeyecegine karar veren
    x=dizi[Ai][aj];                          //ediyorsa kural degiskenini 1 e esitleyen fonk
    z=dizi[Gi][gj];
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    if(x=='I' || x=='X')
    {
       if(Ai-Gi==1 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==-1)
        kural=1;

       else if(Ai-Gi==1 && aj-gj==-1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==1 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==-1)
        kural=1;

       else
        kural=0;

    }
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Yeni tas kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    if(x=='Y' || x=='B')
    {
       if(Ai-Gi==3 && aj-gj==3)
        kural=1;

       else if(Ai-Gi==-3 && aj-gj==-3)
        kural=1;

       else if(Ai-Gi==3 && aj-gj==-3)
        kural=1;

       else if(Ai-Gi==-3 && aj-gj==3)
        kural=1;

       else if(Ai-Gi==-3 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==3 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==3)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==-3)
        kural=1;

       else
        kural=0;

    }
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Piyon kontrolü
    ////////////////////////////////////////////////////Zýp kontrolü
    ////////////////////////////////////////////////////Zýp kontrolü
    ////////////////////////////////////////////////////zýp kontrolü



if(x=='T' || x=='Z')
    {
       if(Ai-Gi==2 && aj-gj==2)
        kural=1;

       else if(Ai-Gi==-2 && aj-gj==-2)
        kural=1;

       else if(Ai-Gi==2 && aj-gj==-2)
        kural=1;

       else if(Ai-Gi==-2 && aj-gj==2)
        kural=1;

       else if(Ai-Gi==-2 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==2 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==2)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==-2)
        kural=1;

       else
        kural=0;

    }
    ////////////////////////////////////////////////////Zýp kontrolü
    ////////////////////////////////////////////////////Zýp kontrolü
    ////////////////////////////////////////////////////zýp kontrolü


    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü
    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü
    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü


    if(x=='O' || x=='L')
    {
       if(Ai-Gi==1 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==-1)
        kural=1;

       else if(Ai-Gi==1 && aj-gj==-1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==-1 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==1 && aj-gj==0)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==1)
        kural=1;

       else if(Ai-Gi==0 && aj-gj==-1)
        kural=1;

       else
        kural=0;

    }

    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü
    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü
    ////////////////////////////////////////////////////Rakiple yer degisen tasin kontrolü

   return kural;
}

int oyunBittiMi()//oyundaki rakip taslarin bittip bitmedigini kontrol edip donguyu kapatacak yer
{

	return 0;

}

sirayaBak(int sira)
{
    if(sira==1)
    {
        sira-=1;
    }
    else if(sira==0)
    {
        sira+=1;
    }

return sira;
}


sirayiTakipEt(int Ai, int aj, int Gi, int gj,int sira)
{
    dizi[Ai][aj]=x;

    if(sira==1)

        {
        if(x=='I' || x=='O' || x=='Z' || x=='Y')
            kural2=1;
        else
            kural2=0;
        }

    if(sira==0)

        {
        if(x=='X' || x=='T' || x=='B' || x=='L')
            kural2=1;
        else
            kural2=0;
        }

    return kural2;
}

oyunBerabereMi()
{

}


int main()
{
    int bitis,a;
    char baslangic,donus;



    printf("\t\t\t>>Esrarengiz Dama<<");
    printf("\n\n\n\t\tNasil oynanir ?      (y)\n\t\tOyuna baslamak icin  (b)");

    scanf("%c", &baslangic);


    if(baslangic=='y')
        {
        system("cls");
        printf("\n\n1.Oyunun amaci rakibin tum taslarini yemektir\n2.Hareket edecek tasin kordinatlarini ilk ve son konum(2 A 3 A) Seklinde yaziniz ve en son ENTER'a tiklayiniz\n3.I ve X taslari birer birim ilerlemektedir\n4.Z ve T taslari ikiser birim ilerlemektedir\n5.O ve L taslari sadece karsi tasla yerdegisebilir\n6.Y ve B taslari ise 3 birim ilerleyebilir\n7. Iki tarafinda sadece O ve L tasi kalirsa berabere biter");
        }


    if(baslangic=='b')
    {
        system("cls");

        oyunSahnesiniAta();
        oyunSahnesiniCizdir();

        do//Oyunun calistigi dongudur
        {

            if(sira==1)
            printf("\nLutfen kordinantlari giriniz(ornek 2A 3A)....(sira 1. oyuncuda)");
            else
            printf("\nLutfen kordinantlari giriniz(ornek 2A 3A)....(sira 2. oyuncuda)");


            scanf("%d%c %d%c",&Ai,&harfsatir1,&Gi,&harfsatir2);

            aj = harfsatir1 %64;

            gj = harfsatir2 %64;

            kontrolEt(Ai,aj,Gi,gj);
            sirayiTakipEt(Ai,aj,Gi,gj,sira);
            oyunuBitiricekMi(kural3);


            if(kural3==1)//Kural3 oyuunu bitirir
             {


                    if(kural2==1)//Kural2 sırayı kontrol eder
                        {

                            if(kural==1)//Kural1 kontrolü 1 deðeriyle gelirse yani oyun mantýðýna uygunsa oyun oynatýlýr
                                {


                                    degerleriDegis(Ai,aj,Gi,gj);
                                    oyunSahnesiniCizdir();
                                    sira = sirayaBak(sira);
                                    sayac1=0;
                                    sayac2=0;
                                }

                        }


             }

             else if(kural3==2)
                {
                    system("cls");
                    printf("1. Oyuncu Kazanmistir TEBRIKLER!!!");
                    break;
                }
             else if(kural3==3)
                {
                    system("cls");
                    printf("2. Oyuncu Kazanmistir TEBRIKLER!!!");
                    break;
                }
             else if(kural3==4)
                {
                    system("cls");
                    printf("Oyun Berabere Iki Tarafada TEBRIKLER!!!");
                    break;
                }

            oyunBittiMi();

        }while(!oyunBittiMi());

    }



    getch();


    return 0;
}
