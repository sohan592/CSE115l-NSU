#include <stdio.h>   //printf, scanf definitions
#define KMS_PER_MILE 1.609 //conversion constant

int main(void) {
	float miles,   // input – distance in miles
	      kms;     // output – distance in kilometres

	//Get the distance in miles
	printf("Enter distance in miles: ");
	scanf("%f", &miles);

	//Convert the distance to kilometres
	kms = KMS_PER_MILE * miles;

	//Display the distance in kilometres
	printf("That equals %f km.\n", kms);

	return 0;
}

