#include<stdio.h>
main()
{
    int a;
    printf("enter marks:");
    scanf("%d" ,&a);
    if(a<100 && a>85)
        printf("gradeA");
    else if(a<84 && a>70)
        printf("gradeB");
    else if(a>55 && a<69)
        printf("gradeC");
    else if(a<54 && a>40)
        printf("gradeD");
    else
        printf("gradeF");
    return 0;
}