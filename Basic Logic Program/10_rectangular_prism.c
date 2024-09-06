#include<stdio.h>
main()
{	
	float width,height,length,surfacearea;
	
	printf(" enter width: ");
	scanf("%f",&width); 
	
	printf(" enter height: ");
	scanf("%f",&height);
	
	printf(" enter length: ");
	scanf("%f",&length);
	
	surfacearea=2*(length*width+height*width+length*height);
	
	printf("area of a rectangular prism: %f",surfacearea);

}
