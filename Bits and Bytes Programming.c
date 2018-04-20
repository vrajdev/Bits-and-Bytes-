#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int binary;
int b[8]={0};
int Number;

int main(void)
{
system("COLOR 0A");
printf ("\n Enter the Decimal Numnber");
scanf("%d",&Number);

int index;
index=7;

while(Number>0)
{
    b[index]=Number%2;
    Number=Number/2;
    index--;
}
for(int index=0; index<8; index++)
{
printf(" %d",b[index]);
}

int decimal;
decimal=0;
index=0;
int power=7;

while(index<8)
{
    decimal=decimal+b[index]*pow(2,power);
    power--;
    index++;
}
printf(" \n%d",decimal);
return(0);
}
