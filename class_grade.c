#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    char a[20];
    int x;
    // 33 D 33 60 C 60 80 B 80 100 A
    printf("**THIS CODE WILL END IF YOU USE HITLER AS NAME\n");
    printf("Enter The Name-->");
    scanf("%s",&a);
    if (strcmp(a,"hitler")==0)
    {
        printf("**THIS PROGRAMME IS ENDED\n");
        exit(0);
    }
    printf("Enter The Marks-->");
    scanf("%d",&x);
    printf("NAME\t *STATUS* \t MARKS \t  GRADE\n");
    if (x<33)
    {
        printf("%s\t *FAIL* \t %d \t D GRADE");
    }
    else if (x<60)
    {
        printf("%s\t *PASS* \t %d \t C",a,x);
    }
    else if (x<80)
    {
        printf("%s\t *PASS* \t %d \t B",a,x);
    }
    else if (x<100)
    {
        printf("%s\t *PASS* \t %d \t A",a,x);
    }

    return 0;
}
