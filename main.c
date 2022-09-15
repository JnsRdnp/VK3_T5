#include <stdio.h>
#include <stdbool.h>

//ohjelma kysyy käyttäjältä kokonaisluvun
//ohjelma tulostaa kyseiseen kokonaislukuun asti kaikki parilliset
//numerot ja summaa ne

int inputNumber;
int x;
int sumOfNumbers;

int main()
{
    printf("Syota kokonaisluku: ");
    scanf("%d",&inputNumber);
    for(x=0;x<=inputNumber;x+=2){
        if(x%2==0 && x!=0){
            printf("%d\n",x);
            sumOfNumbers += x;
        }
    }
    printf("Lukujen summa on %d\n",sumOfNumbers);


    return 0;
}
