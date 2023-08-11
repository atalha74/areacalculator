#include <stdio.h>

int main() {
    int l1,l2,l3,c,a;

    printf("please select the object u want to calculate its size\n");
    printf("1 triangle\n");
    printf("2 square/rectangle\n");
    printf("3 trapezoid\n");
    scanf("%d",&c);
    if (c==1){
        printf("type in the lenght of side:");
        scanf("%d",&l1);
        printf("type in the lenght of side:");
        scanf("%d",&l2);
        printf("answer is: %d",l1*l2/2);
    }
    else if(c==2){
        printf("type in the lenght of side:");
        scanf("%d",&l1);
        printf("type in lenght of the side:");
        scanf("%d",&l2);
        printf("answer is: %d",l1*l2);
    }
    else if (c==3){
        printf("type in the lenght of bottom base:");
        scanf("%d",&l1);
        printf("type in the lenght of upper sole:");
        scanf("%d",&l2);
        printf("type in height:");
        scanf("%d",&l3);
        printf("answer is;%d",(l1+l2)*l3/2);

    }


    return 0;
}
