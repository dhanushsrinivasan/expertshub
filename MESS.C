#include<stdio.h>
#include<conio.h>
void main()
{
int idly=100,dosa=50,tea=50,vadai=50;
int aidly,adosa,atea,avadai;
int balance,bidly,btea,bdosa,bvadai;
int didly,ddosa,dtea,dvadai;


printf("alagu breakfast idly/n/ndosa/nvadai");

scanf("%d%d%d%d",&aidly,&adosa,&atea,&avadai);
printf("balance");
bidly=idly-aidly;
bdosa=dosa-adosa;
btea=tea-atea;
bvadai=vadai-avadai;
printf("%d%d%d%d",bidly,bdosa,btea,bvadai);
scanf("%d%d%d%d",&didly,&ddosa,&dtea,&dvadai);
IDLY=idly-didly;
DOSA=dosa-ddosa;
TEA=tea-ddosa;
VADAI=vadai-dvadai;
printf("both balance");
printf("%d\n%d\n%d\n%d\n",IDLY,DOSA,TEA,VADAI);
getch();

}


