#include <stdio.h>

int main()
{

    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);
    
    int first=0, sec=1, third, i;
    for(i=0; i<num; i++)
    {
        printf("%d, ", first);

        third= first+sec;
        first=sec;
        sec=third;
    }

    return 0;
}
