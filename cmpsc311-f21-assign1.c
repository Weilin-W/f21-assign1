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

// Project Includes
#include <a1support.h>
#include <a1support.c>
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

	// First, lets read in the float numbers to process
	for (i=0; i<20; i++) {
		scanf("%f", &f_array[i]);
	}

    //PERSONAL CODE---Temp comments: Printing float number within the array
	print_array_float(float f_array[0]);

	
	// Return successfully
	return(0);
}
