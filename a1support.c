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
    printf("The sum of the float array is : %.3f", fsum);
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
    for(int i=0; i<ary_length-1; i++){
        int pos = i;
        float swap;
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
    printf("Float[%d] = %.3f\n",0,f_array[0]);
	for (int i=1; i<20; i++){
		printf("Float[%d] = %.3f\n", i,f_array[i]);
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

int graph_sin(double multiplier){
	// Graph the sin(x*multiplier) function
    //Scan thru the horizontal as i would be printing line down
    //j is the all value of print within each i line
    //Make comparison to sin value of the graph
    printf("\n");
    printf("\n");
    //double y_array[70];
    /*for(int x=-3.5; x<=3.5; x+=0.1){
        double y = sin(x*multiplier);
        y_array[x] = y;
        printf("%f",y_array[x]);
    }*/
    //double y_value;
    //double i_value;
    printf("|     |     |     |     |     |     |Graph of y=sin(x*%.2f)\n",multiplier);
    for (double i=1.5; i>=-1.5; i-=0.1){ //1.6 help print last one line
        if(i>0 && i>=-1.5){
            printf(" %.1f | ", i);
        }
        else if(i <= 0 && i>=-1.5){
            printf("%.1f | ",i);
        }
        //else{
            //printf("      "); //spacing for ------- line
        //}
        for(double j=-3.5; j<=3.6; j+=0.1){
            double y = sin(j*multiplier);
            //printf("Current Value of i: %f\n",i_value);
            if(i<y+0.0505 && i>y-0.0505){ //error
                printf("*");
            }
            else{
                printf(" ");
            }
            /*
            if((i == -1.7) && ((j ==-3)||(j==-2)||(j==-1)||(j==0)||(j==1)||(j==2)||(j==3))){
                printf("%.1f", j);
            }
            if(i == y){ //error
                printf("*");
            }
            else{
                printf("*");
            }*/
            //double y = sin(j*multiplier);
            //double y_array[i][j] = y_array[j];
        }
        printf("\n");
    }
    /*for (int label=-3.5; label<=3.5; label+=0.1){
        printf("-");
    }
    for (int xAxis=-3.5; xAxis<=3.5; xAxis+=0.1){
        if(xAxis==-3||xAxis ==-2||xAxis==-1||xAxis==0||xAxis==1||xAxis==2||xAxis==3){
            printf("%d",xAxis);
        }
        else{
            printf(" ");
        }
    }*/
    return 0;
}