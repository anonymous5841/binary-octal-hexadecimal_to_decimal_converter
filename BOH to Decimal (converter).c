#include<math.h>
#include<stdio.h>

int main ()
{
int no, base, q, r;
int  k=1000, decimal=0, digit=0;
int  j=0, i=0, t=0;
int array[4];
char charac;


printf("Conversion of base from octal, hexadecimal & binary to Decimal number system.\n");

printf("Enter the base: ");
scanf("%d", &base);

 while(base!=8 && base!=16 && base!=2)
 {
   printf("Base should be of octal, hexadecimal & binary.\n");
   printf("base is incorrect enter the correct base: ");
   scanf("%d", &base);
   }

printf("Enter a four digit number: ");

 if(base==16)
 {
     charac= getchar();
   while((charac= getchar()) !='\n')
  {
    switch(charac)
    {
     case'0':
      digit=0;
       break;
     case'1':
      digit=1;
       break;
     case'2':
      digit=2;
       break;
     case'3':
      digit=3;
       break;
     case'4':
      digit=4;
       break;
     case'5':
      digit=5;
       break;
     case'6':
      digit=6;
       break;
     case'7':
      digit=7;
       break;
     case'8':
      digit=8;
       break;
     case'9':
      digit=9;
       break;
     case'A':
     case'a':
      digit=10;
       break;
     case'B':
     case'b':
      digit=11;
       break;
     case'C':
     case'c':
      digit=12;
       break;
     case'D':
     case'd':
      digit=13;
       break;
     case'E':
     case'e':
      digit=14;
       break;
     case'F':
     case'f':
      digit=15;
       break;
     default:
      printf("Each digit entered should be one less than the base.\n");
      printf("numbers should be from 0-9 or A-F\n");
       break;
            }

   decimal = decimal * 16 + digit;
  }
 }
 else
 {
  scanf("%d", &no);
   while(k>=1)
   {
    q=no/k;

     if(q>base-1)
      {
       printf("each digit entered should be one less than the base.\n");
       printf("enter the correct digit: ");
       scanf("%d", &no);
       i=0;
       k=1000;
       q=no/k;
        }

    r=no%k;
    no=r;
    array[i]=q;
    i++;
    k=k/10;
    }

  for (i = 0; i < 4; i++) {
  decimal += array[i] * pow(base,3-i);
  } }
 printf("In decimal the number is %d\n", decimal);
 return 0;
 }
