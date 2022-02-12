#include <stdio.h>
int main()
{
    char ch='A';//'""  
    int  age=20;
    float weight  =2;
    double  c=3;
    printf("i love u\n %c\n%d\n%f\n%lf\n",ch,age,weight,c);
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(age));
    printf("%d\n",sizeof(weight));
    printf("%d\n",sizeof(c));
    return 0;
    
    
}