#include <stdio.h>

int main(void) {
	// your code goes here
    int t, r1, r2, r3, r4;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        /* code */
        scanf("%d", &r1);
        scanf("%d", &r2);
        scanf("%d", &r3);
        scanf("%d", &r4);
        
        if(r1 == 0 || r2 == 0 || r3 == 0 || r4 == 0 || r1 == 1 || r2 == 1 || r3 == 1 || r4 == 1) {
            if(r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0) {
                printf("IN\n");
            }
            else {
                printf("OUT\n");
            }
        }
    }
	return 0;
}
