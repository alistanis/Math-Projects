#include <stdio.h>
#include <stdbool.h>
#include <math.h>


void check(int *x, bool *isAnswer);

int main (int argc, const char * argv[]) {
	
	int x = 20;
    
    bool isAnswer = false;
	
	while (isAnswer == false) {
		check(&x, &isAnswer);
	}
	printf("The smallest number evenly divisible by 1-20 is: %d \n", x);

}

void check (int *x, bool *isAnswer) {
	int i;
    for(i = 1; i<20; i++) {
        if ( *x % i != 0 ) {
        	*isAnswer = false; 
        	*x+=20;
        	break; 
        }
        else {
			*isAnswer = true;
		}
    }
}

