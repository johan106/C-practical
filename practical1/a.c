#include <stdio.h>
int main(){
int principal,rate,years;
printf("Enter the principal amount:");
scanf("%d",&principal);

printf("Enter the rate in percent:");
scanf("%d",&rate);

printf("Enter the years in number:");
scanf("%d",&years);

int si=(principal*rate*years)/100;
printf("The simple interest is %d",si);
    return 0;
}