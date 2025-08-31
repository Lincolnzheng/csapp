#include <stdio.h> 
void show_byte(start,len);
void show_short(short int x);
void show_long(long int x);
void show_double(double x);
typedef unsigned char *byte_pointer;
int val = 0x87654321;
int main(){
	byte_pointer valp = (byte_pointer) &val;
	show_byte(valp,1);
	show_byte(valp,2);
	show_byte(valp,3);
	return 0;
}

void show_byte(unsigned char *start,int len){
	int i;
	for (i=0;i<len;i++) {
		printf("%.2x",start[i]);
	}
	printf("\n");
}

void show_short(short int x) {
	show_byte((byte_pointer) &x,sizeof(short int));
	printf("\n");
}
void show_long(long int x) {
	show_byte((byte_pointer) &x,sizeof(long int));
	printf("\n");
}
void show_double(double x) {
	show_byte((byte_pointer) &x,sizeof(double));
	printf("\n");
}
