#include<stdio.h>
int main(void){
	int i;
	for(i=1;i<=64;i++){
		printf("<div class=\"mySlides fade\">\n");
		printf("  <div class=\"numbertext\">%2d / 64</div>\n",i);
		printf("  <iframe class=\"txtframe\" src=\"fin\\fin%02d.txt\" frameborder=\"0\" scrolling=\"NO\"></iframe>\n",i);
		printf("</div>\n");
	}
	return 0;
}
