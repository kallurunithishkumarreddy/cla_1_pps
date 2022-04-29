/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float v1;
  float v2;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%c",&operator);

  switch(operator)
    {
        
    case '/':
    scanf("%f %f", &v1,& v2);
    answer = v2/v1;
printf("%.9f",answer);
      break;
    case '*':
     scanf("%f %f", &v1,& v2);
     answer = v1*v2;
printf("%.9f",answer);
      break;
    case '+':
    scanf("%f %f", &v1,& v2);
    answer = v1+v2;
printf("%.9f",answer);
      break;
    case '-':
    scanf("%f %f", &v1,& v2);
    answer = v1-v2;
printf("%.9f",answer);
      break;
    case '^':
    scanf("%f %f", &v1,& v2);
    answer = pow(v1,v2);
printf("%.9f",answer);
      break;
    case 'r': answer = sqrt(v2);
printf("%.9f",answer);
      break;
   default :
printf("enter correct operator");
    }
   return 0;
}
