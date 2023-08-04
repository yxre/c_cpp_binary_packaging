#include <stdio.h>

#include <limits.h>

#define BOOL char
#define TRUE 1
#define FALSE 0


void demonstrate_integer_lengths();
void demonstrate_define();
void demonstrate_arrays();
void demonstrate_multidim_arrays();
void demo_conditions();
void demo_strings();
void demo_loops();
void demo_functions();
void demo_static();
void demo_pointers();
void demo_dynamic_memory();
void demo_function_pointers();
void demo_bit_work();
void demo_jumps();

int main(int argc, char** argv) {
	printf("Starting C basics");
	demonstrate_integer_lengths();
	demonstrate_define();

	demonstrate_multidim_arrays();
	demo_conditions();
	demo_strings();
	demo_loops();
	demo_functions();
	demo_static();
	demo_pointers();
	demo_dynamic_memory();
	demo_function_pointers();
	demo_bit_work();
	demo_jumps();


	return 0; //exit code "echo $?"
}


void demonstrate_integer_lengths() {

	int min = INT_MIN; //limits contain max and mins. Useful for bounds checking on different HW
	int max = INT_MAX;
	unsigned int umax = UINT_MAX;
	long long llmax = LLONG_MAX; 

	printf("Integer min is %d and max is %d\n", min, max);
	printf("Can add unsigned and long for larger, %d and %lld respectively\n", umax, llmax);
}

void demonstrate_define() {
	BOOL b = TRUE;
	if(b) {
		printf("define does a simple string replacement on the source code\n");
	}
}

void demonstrate_arrays() {
	int numbers[10];
	numbers[5] = 50;
	printf("direct array access: %d\n", numbers[5]);
	printf("Accessing undefined elements has no guarantee though often zeroed: %d\n", numbers[1]);
}


void demonstrate_multidim_arrays() {
	int numbers[5][3]; //initlizes the space in memory on the stack
	int numbers_initializer[1][5] = {
		{1,2,3,4,5}
	};
	numbers[0][2] = 3;
	
	printf("direct access: %d\n", numbers[0][2]);
	printf("initializer access: %d\n", numbers_initializer[0][2]);
}
void demo_conditions(){
	int a = 1;
	int b = 1;
	int c = 2;

	if (a == b) {
		printf("Comparison result: %d\n", a == b);
	}	
	if (a < c || a > c) {
		printf("a is less than or greater than c\n");
	}
}
void demo_strings(){
	
}
void demo_loops(){}
void demo_functions(){}
void demo_static(){}
void demo_pointers(){}
void demo_dynamic_memory(){}
void demo_function_pointers(){}
void demo_bit_work(){}
void demo_jumps(){}
