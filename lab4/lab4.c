/* your name                                       */
/* Lab 4                                           */
/* Figure the area of the top of a cylinder        */
/* and the volume of a cylinder                    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILE_IN  "lab4.dat"
//#define FILE_IN  "lab4sample.dat"
#define FILE_OUT "lab4.out"

int main(void)
{
        FILE * my_data;                              // my work 1
        FILE * out_file;                             // my work 2
        my_data = fopen(FILE_IN,"r");                // my work 3
        if(my_data == NULL)                          // MY WORK 4
        {                                            // mw 5
	printf("Error on opening the input file \n");
        exit (EXIT_FAILURE);                         // mw 6
	}                                            // MW 7
        out_file = fopen(FILE_OUT,"w");              // mw 8
        if(out_file == NULL)                         // mw 9
        {                                            // mw 10
	printf("Error on opening the output file \n");
        exit(EXIT_FAILURE);                          // mw 11  
        }                                            // mw 12 
         
        int count = 1;
        double area, vol, radius, height;
        fprintf(out_file, "\nMiguel Tirado.  Lab 4.\n");
        while((fscanf(my_data,"%lf%lf%",&radius,&height))== 2)
        {
                area = M_PI*radius*radius;
                vol = M_PI*radius*radius*height;
	        fprintf(out_file, "\nCylinder %1d", count);
	        fprintf(out_file, "\nThe radius is:    %9.3f", radius);
	        fprintf(out_file, "\nThe height is:    %9.3f", height);
	        fprintf(out_file, "\nThe top area is:  %9.3f", area);
	        fprintf(out_file, "\nThe volume is:    %9.3f\n", vol);
                count++;
        }
        fclose(my_data);                            // mw 13
        fclose(out_file);                           // mw 14
        return EXIT_SUCCESS;
}
