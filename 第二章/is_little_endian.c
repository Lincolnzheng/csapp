//is_little_endian
#include <stdio.h>
typedef unsigned char *byte_pointer;

char show_byte(unsigned char *start, int len) {
    printf("%.2x\n", start[0]);
    return start[0];
}

int main() {
    int i = 0x12345678;
    byte_pointer y = (byte_pointer) &i;
    char x = show_byte(y, 1);
    if (x == 0x78)
        printf("С����\n");
    else if (x == 0x12)
        printf("�����\n");
    else
        printf("�o���Д����\n");
    return 0;
}
