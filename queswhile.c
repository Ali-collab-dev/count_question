#include <stdio.h>

int main (){
   int password,number,start,x;
   start=0;
   printf("Enter the password=");
   scanf("%d",&password);
   while (password!=692004)
   {
    printf("WRONG PASSWORD PLEASE TRY AGAIN\n");
    printf("TRY AGAIN--->");
    scanf("%d",&password);
   }
if (password==692004)
   {
    printf("Welcome sir\n");
    printf("I am friday at your service\n");
    printf("Enter the number=");
    scanf("%d",&number);
    while (start<number)
    {
        x=start+1;
        printf("%d,",x);
        start=x;
    }
    return 0;
}
}