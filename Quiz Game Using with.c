#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()

{


int i;
int soru1,soru2,soru3,soru4,soru5;
int puan1,puan2,puan3,puan4,puan5,puan6,puan7,puan8,puan9,puan10;
int puan01,puan02,puan03,puan04,puan05,puan06,puan0,puan08,puan09,puan010;
int total,totatl2,total3,total4;
int toplam;


system("cls");
system("color 0a");
printf(" Merhaba Oyuna Hosgeldiniz \n\n");

printf("oyunu baslatmak icin 1'e basiniz: \n");
printf("oyundan cikis  yapmak icin 2'ye basiniz: \n");
scanf("%d",&i);


if(i==1)
{
    printf("oyun basladi basarilar dileriz \n\n");

}

else if(i==2)
{
    printf("oyun sona erdi üzgünüm \n\n");
}

else
{
    printf("yanlis secim yaptiniz \n\n");
}

if(i==1)
{
    printf("1)- Doner hangi ulkeye aittir ? \n\n");
    printf("1- Almanya \n");
    printf("2- Fransa \n");
    printf("3- Rusya \n");
    printf("4- Turkiye \n");


    printf("seciminizi giriniz: ");
    scanf("%d",&soru1);

if(soru1==4)
{
    printf("dogru cevap \n\n");
    puan1=10;
    printf("skorunuz: %d \n\n",puan1);

}

else
{
    printf("yanlis cevap \n\n");
    puan01=0;
    printf("skorunuz: %d \n\n",puan01);
}
    printf("2)- Hangi ulke Avrupa'nin en buyuk ulkesidir ? \n\n");
    printf("1- Almanya \n");
    printf("2- Fransa \n");
    printf("3- Rusya \n");
    printf("4- Turkiye \n");

    printf("seciminizi giriniz: ");
    scanf("%d",&soru2);

    if(soru2==3)
{
    printf("dogru cevap \n\n");
    puan2=10;
    printf("skorunuz: %d \n\n",puan2);

}

else
{
    printf("yanlis cevap \n\n");
    puan02=0;
    printf("skorunuz: %d \n\n",puan02);

}

    printf("3)- Atom bombasini kim bulmusur ? \n\n");  
    printf("1- Albert Einstein \n");
    printf("2- Isaac Newton \n");
    printf("3- Niels Bohr \n");
    printf("4- Enrico Fermi \n");
    printf("5-Robert Oppenheimer \n");

    printf("seciminizi giriniz: ");
    scanf("%d",&soru3);


    if(soru3==5)

{

    printf("dogru cevap \n\n");
    puan3=10;
    printf("skorunuz: %d \n\n",puan3);

}
   
else

{

    printf("yanlis cevap \n\n");
    puan03=0;
    printf("skorunuz: %d \n\n",puan03);

}


    printf("4)-Mars'ta hangi ulke ilk ayak izi birakmistir ? \n\n");
    printf("1- Amerika \n");
    printf("2- Rusya \n");
    printf("3- Almanya \n");
    printf("4- Fransa \n");

    printf("seciminizi giriniz: ");
    scanf("%d",&soru4);

    if(soru4==2)

{
    printf("dogru cevap \n\n");
    puan4=10;
    printf("skorunuz: %d \n\n",puan4);
    
}

else    

{
    printf("yanlis cevap \n\n");
    puan04=0;
    printf("skorunuz: %d \n\n",puan04);

}

    printf("5)- Hangisi Uluslararasi Uzay Istasyonu'nun kurucusudur ? \n\n");
    printf("1- Neil Armstrong \n");
    printf("2- Buzz Aldrin \n");
    printf("3- John Glenn \n");
    printf("4- Alan Shepard \n");

    printf("seciminizi giriniz: ");
    scanf("%d",&soru5);

    if(soru5==1)

{

    printf("dogru cevap \n\n");
    puan5=10;
    printf("skorunuz: %d \n\n",puan5);

}

else

{

    printf("yanlis cevap \n\n");
    puan05=0;
    printf("skorunuz: %d \n\n",puan05);


}



printf("oyun bitti \n\n");
toplam=puan1+puan2+puan3+puan4+puan5;
printf("toplam puaniniz: %d \n\n",toplam);




}




    return 0;
}