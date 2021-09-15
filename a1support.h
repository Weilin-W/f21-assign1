#ifndef CMPSC311_A1SUPPORT_INCLUDED
#define CMPSC311_A1SUPPORT_INCLUDED

////////////////////////////////////////////////////////////////////////////////
//
//  File          : a1support.h
//  Description   : This is a set of general-purpose utility functions we use
//                  for the 311 homework assignments.
//
//  Author   : Patrick McDaniel
//  Created  : Mon Feb  9 07:30:26 EST 2021

//
// Functional Prototypes

int print_array_float(int ary_length,float f_array[]);
	// Print out the list of float values

int print_array_integer(int ary_length,int i_array[]);
	// Print out the list of integer values

float sum_array_float(float f_array[]);
	// Compute the sum of the float values

int sum_array_integer(int i_array[]);
	// Compute the sum of the integer values

int euclids_algorithm(int a, int b);
	// Euclid's algorithm to calculate the greatest common divisor

int selection_sort_float(int ary_length,float f_array[]);
	// Sort the list of float values

int selection_sort_integer(int ary_length,int i_array[]);
	// Sort the list of integer values

//int graph_sin(double multiplier);
	// Graph the sin(x*multiplier) function*/

#endif // CMPSC311_A1SUPPORT_INCLUDED
