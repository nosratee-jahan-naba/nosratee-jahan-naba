#include <stdio.h>
#include<string.h>

int main(){

    char a[1001],b[1001];
    scanf("%s",&a);
    scanf("%s",&b);

    int lenA =strlen(a);
    int lenB =strlen(b);

    int tempA=0,tempB=0;

    for(int i=0; i<lenA; i++){
        tempA +=a[i];
    }

    for(int i=0; i<lenB; i++){
        tempB +=b[i];
    }

    if(lenA == lenB){
        if(tempA == tempB){
            printf("YES\n");
        }else{
        printf("NO\n");
        }

    }else{
        printf("NO\n");
    }

    return 0;

}
