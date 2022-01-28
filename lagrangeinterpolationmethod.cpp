//IMPLEMENTATION OF LAGRANGE INTERPOLATION METHOD
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	float yp=0, xp,p;
	int n,i, j;
	float x[50];
	float y[50];
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter the 2 values:\n");
		scanf("%f %f",&x[i],&y[i]);
	}
     printf("Enter the interpolation point:\n");
     scanf("%f",&xp);
     for(i=1;i<=n;i++){
     	float p=1;
     	for (j=1;j<=n;j++){
     		if(i!=j){
     			p=p*((xp-x[j])/(x[i]-x[j]));
			 }
		 }
		  yp=yp+p*y[i];
	 }
	 printf("The Values are: %f \n",yp);
	 exit(0);
	 return 0;
}
