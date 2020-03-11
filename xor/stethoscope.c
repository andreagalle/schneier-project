
#include <stdio.h>

int main (void)
{

/*
for (char i = -128; i < 127; i++)
{
    printf("%d = %c\n", i, i);
}

printf("%d = %c\n", 127, 127);
*/

for (int i = 32; i < 127; i++) {

//	for (int j = 32; j < 127; j++) {
//
//		printf("%3d = %c (%x)\n", i^j, i^j, i^j);
//	}

	printf("%3d = %c (%x)\n", i, i, i);
}

return 0;

}

#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[])  			  // argc # of inputs (including program name) 

{
     FILE *fi;
     char *cp;
     int c, i;

//         for (i=1; i<101; ++i)  {                                // read the input-file in binary-mode
         	if ((fi = fopen(argv[1], "rb")) != NULL)  {      // read the input-file in binary-mode
         	         while ((c = getc(fi)) != EOF)  {        // parse input file chars until eof is reached

for (int i = 32; i < 127; i++) {

	for (int j = 32; j < 127; j++) {

		printf("%3d = %c (%x)\n", i^j, i^j, i^j);
	}

	printf("%3d = %c (%x)\n", i, i, i);
}
//			      for (j=1; j<i; ++j) {
//			         *cp = getc(fi)
//                      	         if (!*cp) cp = argv[1];            // periodically parse key chars (after cp++)
//			      }
         	              //cp = &c + i;                      // xored assign to the input char parsed (using key char) 
         	              //c ^= *(cp++);                      // xored assign to the input char parsed (using key char) 
         	              c ^= *(cp);                      // xored assign to the input char parsed (using key char) 
         	              putc(c,fo);                        // output xored chars into the output-file
         	         }                                       
    	 	    fclose(fi);
	 	}
	 }
}

/*

#include <stdio.h>
#include <stdlib.h>

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

*/
