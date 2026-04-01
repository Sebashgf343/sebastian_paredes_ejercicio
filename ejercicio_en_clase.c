#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A[10];
int i;
for (size_t i = 0; i < 10; i++)
{
    printf("ingrese el elemento %d",i+1);
    scanf("%d",&A[i]);

}
printf("los elementos del vector son");
for (size_t i = 0; i < 10; i++)
{
    printf("%d",A[i]);
}
    return 0;
}
