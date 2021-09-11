#include <a1support.h>

/*Support functions within a1support.h, all functional code purpose
    Author: Wei Lin Weng
    Date: 9/11/2021 */

int print_array_float(float f_array[]);
	// Print out the list of float values
    printf("Array of float values:");
    printf("Float[%d] = %f\n",0,f_array[0])
	for (int i = 1, i<20 i++){
		printf("Float[%d] = %f\n", i,f_array[i])
	}

int print_array_integer(int i_array[]);
	// Print out the list of integer values
    printf("Array of integer values:");
    printf("integer[%d] = %d\n",0,i_array[0])
	for (int i = 1, i<20 i++){
		printf("integer[%d] = %d\n", i,i_array[i])
	}
float sum_array_float(??????);
	// Compute the sum of the float values

int sum_array_integer(??????);
	// Compute the sum of the integer values

int euclids_algorithm(??????);
	// Euclid's algorithm to calculate the greatest common divisor

int selection_sort_float(??????);
	// Sort the list of float values

int selection_sort_integer(??????);
	// Sort the list of integer values

int graph_sin(??????);
	// Graph the sin(x*multiplier) function