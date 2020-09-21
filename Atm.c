#include <stdio.h>

int main(void) {
    int amt;
    float bal;
    scanf("%d",&amt);
    scanf("%f",&bal);
    if(amt%5 == 0 && amt<=bal && amt<bal-0.50){
        printf("%0.2f",bal-(amt+0.50));
    }else{
        printf("%0.2f",bal);
        	return 0;

    }
}
