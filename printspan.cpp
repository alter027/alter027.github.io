#include<stdio.h>
int main(void){
	int i;
	for(i=1;i<=64;i++){
		printf("<span class=\"dot\" onclick=\"currentSlide(%d)\"></span>\n",i);
	}
	return 0;
}

