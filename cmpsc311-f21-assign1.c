////////////////////////////////////////////////////////////////////////////////
//
//  File           : cmpsc311-f21-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of CMPSC311 (systems programming).  See the related
//                   assignment page for details.
//
//   Author        : WEI LIN WENG
//   Last Modified : 9/11
//

// Include Files
#include <stdio.h>
#include <math.h>
// Project Includes
#include <a1support.h>

//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	// NOTE: this is where you will want to add some new variables
	float f_array[20];
    int i;
	int array_length = 20;
	// First, lets read in the float numbers to process
	for (i=0; i<20; i++) {
		scanf("%f", &f_array[i]);
	}
	//Calculation of float @ if n>=10; n*pi else n * 8.4
    for (int i=0; i<20; i++){
        if(f_array[i] >= 10){
            f_array[i] = f_array[i] * M_PI;
        }
        else{
            f_array[i] = f_array[i] * 8.4;
        }
    }

    //Printing float number within the array and create a new line
	print_array_float(20,f_array);
	printf("\n");

	//Create an second array of 20 integers with rounded i values
	//Appending f_array in to integer array
	int i_array[20]; 
	for (i=0; i<20; i++){
		i_array[i] = round(f_array[i]);
	}
	//Printing Integer list
	print_array_integer(20,i_array);
	printf("\n");
	//Print sum of float
	sum_array_float(f_array);
	
	//Print sum of integer
	sum_array_integer(i_array);

	//Calculating gcd and printing the function of gcd of 2 values
	//The GCD(64, 8) = 8  Example print out
	int a;
	int b;
	for(i=0; i<array_length-1; i++){
		a = i_array[i];
		b = i_array[i+1];
		printf("The GCD(%d,%d) = %d\n", i_array[i], i_array[i+1], euclids_algorithm(a,b));
	}

	//printing selection sort float values
	selection_sort_float(20,f_array);

	//printing selection sort integer values
	selection_sort_integer(20,i_array);

	//printing the sine graph with multipliers
	//graph_sin(1.00);
	// Return successfully
	return(0);
}
