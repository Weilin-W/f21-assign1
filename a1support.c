#include <a1support.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*Support functions within a1support.h, all functional code purpose
    Author: Wei Lin Weng
    Date: 9/11/2021 */

int print_array_float(int ary_length,float f_array[]){
	// Print out the list of float values
    printf("Array of float values:");
    printf("Float[%d] = %.3f\n",0,f_array[0]);
	for (int i=1; i<20; i++){
		printf("Float[%d] = %.3f\n", i,f_array[i]);
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
    printf("\n");
    return 0;
}    
int sum_array_integer(int i_array[]){
	// Compute the sum of the integer values
    int isum = 0;
    for (int i=0; i<20; i++){
        isum += i_array[i];
    }
    printf("The sum of the integer array is : %d", isum);
    printf("\n");
    return 0;
}
int euclids_algorithm(int a, int b){
	// Euclid's algorithm to calculate the greatest common divisor
    if (a==0){
        return b;
    }
    return euclids_algorithm(b % a, a);
}
int selection_sort_float(int ary_length,float f_array[]){
	// Sort the list of float values
    //For loop to get position of the array
    printf(f_array);
    for(int i=0; i<ary_length-1; i++){
        int pos = i;
        int swap;
        //Search thru the array list and compare the value @ j 
        //with the value at inital position
        //position increase by 1
        for(int j=i+1; j<ary_length; j++){
            if(f_array[j]<f_array[pos])
                pos = j;
        }
        //if position doen't equal to i
        //A min found at value of J which is the current position of j
        //temp value of Swap placed, swap the two values within the array
        if (pos != i){
            swap = f_array[i];
            f_array[i] = f_array[pos];
            f_array[pos] = swap;
        }
    }
    //printing all values within the sorted array
    printf("Array of Sorted float values:");
    printf("Float[%d] = %f\n",0,f_array[0]);
	for (int i=1; i<20; i++){
		printf("Float[%d] = %f\n", i,f_array[i]);
	}
    return 0;
}
int selection_sort_integer(int ary_length,int i_array[]){
	// Sort the list of integer values
    //For loop to get position of the array
    for(int i=0; i<ary_length-1; i++){
        int pos = i;
        int swap;
        //Search thru the array list and compare the value @ j-
        //with the value at inital position
        //position increase by 1
        for(int j=i+1; j<ary_length; j++){
            if(i_array[j]<i_array[pos])
                pos = j;
        }
        //if position doen't equal to i
        //A min found at value of J which is the current position of j
        //temp value of Swap placed, swap the two values within the array
        if (pos != i){
            swap = i_array[i];
            i_array[i] = i_array[pos];
            i_array[pos] = swap;
        }
    }
    //printing all values within the sorted array
    printf("Array of sorted integer values:");
    printf("integer[%d] = %d\n",0,i_array[0]);
	for (int i=1; i<ary_length; i++){
		printf("integer[%d] = %d\n", i,i_array[i]);
	}
    return 0;
}

/*int graph_sin(??????){
	// Graph the sin(x*multiplier) function
} */