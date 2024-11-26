#include<stdio.h>

long toBin(int); //use kela hai funcion tobin hai 

int main()
{
    long arr; // long int getla karat 4 byte peksha jesat hai 
    int s1;

    printf("\nEnter a decimal number : "); // input
    scanf("%d",&s1);

    arr = toBin(s1);
    printf("\n The Binary value is : %ld\n\n",arr); //output

    return 0;
}
long toBin(int s1) // use a fucntion
{
    long arr=0,remainder,f=1; // function la three parameters lagta arr remainder AND 1 hai mahnun f dila hai 
    while(s1 != 0)
    {
         remainder = s1 % 2;
         arr = arr + remainder * f;
         f = f * 10;                   
         s1 = s1 / 2;
    }
    return arr;
}
