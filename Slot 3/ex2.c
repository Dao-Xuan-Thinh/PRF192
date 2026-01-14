#include<stdio.h>

int main(){
	char kt = 'A';
	
	printf("%-15s %-15s %-15s %-15s %-15s %-15s\n", "Name", "Value", "Dec", "Hex", "Oct", "Size");
	printf("%-15s %-15c %-15u %-15x %-15o %-15s\n\n", "kt", kt, kt, kt, kt, "1" );
	
	int integerVar = 10;
	long longVar = 1000;
	float floatVar = 13.5f;
	double doubleVar = 100.15;
	
	printf("%-15s\n", "Size (Bytes)");
	printf("----------------------------------\n");
	
	printf("charVar: %-15d\n",sizeof(kt));
	printf("integerVar: %-15d\n",sizeof(integerVar));
	printf("longVar: %-15d\n",sizeof(longVar));
	printf("floatVar: %-15d\n",sizeof(floatVar));
	printf("doubleVar: %-15d\n",sizeof(doubleVar));

	
}
