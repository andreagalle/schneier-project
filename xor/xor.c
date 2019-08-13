
#include <stdio.h>
#include <stdlib.h>

/* Usage:  crypto key input_file output_file */

void main (int argc, char *argv[])  			  // argc # of inputs (including program name) 

{
     FILE *fi, *fo;
     char *cp;
     int c;

     if ((cp = argv[1]) && *cp!='\0')  {		  // just check the key is non-empty
         if ((fi = fopen(argv[2], "rb")) != NULL)  {      // read the input-file in binary-mode
    	     if ((fo = fopen(argv[3], "wb")) != NULL)  {  // write the output-file in binary-mode
                  while ((c = getc(fi)) != EOF)  {        // parse input file chars until eof is reached
                       if (!*cp) cp = argv[1];            // periodically parse key chars (after cp++)
                       c ^= *(cp++);                      // xored assign to the input char parsed (using key char) 
                       putc(c,fo);                        // output xored chars into the output-file
                  }                                       
         	  fclose(fo);                            
    	     }
    	     fclose(fi);
	 }
     }
}
