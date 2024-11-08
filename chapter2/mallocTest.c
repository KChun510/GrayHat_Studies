#include <stdlib.h> 
#include <string.h>
/* memory.c */
int indexOne = 5; //Store a int, indexOne in .data section
char * str; // Store char pointer called str, in the .bss section
int nothing; // Store a int var in the .bss sectinon
void fun1(int c){ // function def stored in the .text section
	int i = c; // Store int of i, in the stack 
	str = (char *) malloc(10 * sizeof (char)); // Allocate 10 bytes in the heap, and point str to it
						   // Side note, no longer need to do this in modern c
						   // But malloc returns, a void *, and re-cast it to (char *)
	strncpy(str, "abcde", 5);		   // Call inbuilt string method, were we save "abcde" in the str mem addr
}
int main () {
	fun1(1);		// fun1 call gets saved into our call stack
	return 1;
}
