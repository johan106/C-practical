#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
{
    printf("The greatest number is %d",a);
}
else if(b>a && b>c){
    
    printf("The greatest number is %d",b);
}
else if(c>a && c>b){
    
    printf("The greatest number is %d",c);
}
else if(a == b || a==c || b==a || b==c || c ==a || c==b){
    printf("One of the  numbers are of equal in value");
}


   return 0;
}