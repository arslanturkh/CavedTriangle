
#include <stdio.h>

int main (void) {
	
	int satir, disbosluk, yildiz, high, thickness;
	int disyildiz, icbosluk;
	// to identify
	
	printf("\n\nEnter high of the triangle: ");
	scanf("%d", &high);
	// to get high of the triangle
	
	printf("\nEnter thickness of the triangle: ");
	scanf("%d", &thickness);
	// to get thickness of the triangle
	
	while ((thickness==0) || (thickness>high)) { // for problems
		
		if (thickness==0) { //for problem of thickness = 0
			
			printf("\n\nThickness cannot be zero! \n"); // for warning 
			printf("Please enter thickness again: ");
			scanf("%d", &thickness);
			// to get new thickness
		} // end of the first if
		
		if (thickness>high) {  // for problem of thickness > high
			
			printf("\n\nThickness cannot be bigger than high!\n"); // for warning
			printf("Please enter thickness again: ");
			scanf("%d", &thickness);
			// to get new thickness
		} // end of the second if
	} // end of the while loop
	
	printf("\n\n\n");
	
	for (satir=1; satir<=thickness; satir++) {
		
		for (disbosluk=satir; disbosluk<high; disbosluk++) {
			
			printf(" ");
		} //end of the for loop for outside space of triangle 
		
		for (yildiz=1; yildiz<=(2 * satir) - 1; yildiz++) {
			
			printf("*");
		} // end of the for loop for first stars part
		
		printf("\n");
	} // end of the for loop for begining part
	
	for (satir; satir<=(high - thickness); satir++) {
		
		for (disbosluk=satir; disbosluk<high; disbosluk++) {
			
			printf(" ");
		} // end of the for loop for outside space of triangle
		
		for (disyildiz=1; disyildiz<=thickness; disyildiz++) {
			
			printf("*");
		} // end of the for loop for for first stars
		
		for (icbosluk=1; icbosluk<=((2 * satir) - (1 + (2 * thickness))); icbosluk++) {
			
			printf(" ");
		} // end of the for loop for inside space of triangle
		
		for (disyildiz=1; disyildiz<=thickness; disyildiz++) {
			
			printf("*");
		} // end of the for loop for second stars
		
		printf("\n");
	} // end of the for loop for main part
	
	for (satir; satir<=high; satir++) {
		
		for (disbosluk=satir; disbosluk<high; disbosluk++) {
			
			printf(" ");
		} //end of the for loop for outside space of triangle 
		
		for (yildiz=1; yildiz<=(2 * satir) - 1; yildiz++) {
			
			printf("*");
		} // end of the for loop for last star part
		
		printf("\n");
	} // end of the for loop for last part
	
	return 0;
} // end of the programme
