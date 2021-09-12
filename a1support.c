#include <a1support.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*Support functions within a1support.h, all functional code purpose
    Author: Wei Lin Weng
    Date: 9/11/2021 */

int print_array_float(int ary_length,float f_array[]){

    //Calculation of float @ if n>=10; n*pi else n * 8.4
    for (int i=0; i<ary_length; i++){
        if(f_array[i] >= 10){
            f_array[i] = f_array[i] * M_PI;
        }
        else{
            f_array[i] = f_array[i] * 8.4;
        }
    }


	// Print out the list of float values
    printf("Array of float values:");
    printf("Float[%d] = %f\n",0,f_array[0]);
	for (int i=1; i<20; i++){
		printf("Float[%d] = %f\n", i,f_array[i]);
	}
    return 0;
}
int print_array_integer(int ary_length,int i_array[]){
	// Print out the list of integer values
    printf("Array of integer values:");
    printf("integer[%d] = %d\n",0,i_array[0]);
	for (int i=1; i<ary_length; i++){
		printf("integer[%d] = %d\n", i,i_array[i]);
	}
    return 0;
}
float sum_array_float(float f_array[]){
	// Compute the sum of the float values
    float fsum = 0.0;
    for (int i=0; i<20; i++){
        fsum += f_array[i];
    }
    printf("The sum of the float array is : %f", fsum);
    return 0;
}    
int sum_array_integer(int i_array[]){
	// Compute the sum of the integer values
    int isum = 0;
    for (int i=0; i<20; i++){
        isum += i_array[i];
    }
    printf("The sum of the integer array is : %d", isum);
    return 0;
}
/*int euclids_algorithm(??????);
	// Euclid's algorithm to calculate the greatest common divisor

int selection_sort_float(??????);
	// Sort the list of float values

int selection_sort_integer(??????);
	// Sort the list of integer values

int graph_sin(??????);
	// Graph the sin(x*multiplier) function */