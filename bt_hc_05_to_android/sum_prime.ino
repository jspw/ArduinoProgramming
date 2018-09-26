#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  num[5];
    int i=1,a;

    for(i= 0; i<5; i++){
        scanf("%d", &num[i]);
    }

    for(i= 0; i<5; i++){
        a = (num[i+1]+num[i]);
        if(a%2==0){
            printf("The remainder of addition of %d and %d divided by 2 is zero(0)/n", num[i+1],num[i]);

        }
    }

    return 0;
}
